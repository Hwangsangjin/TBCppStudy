#include <iostream>
#include <chrono>
#include <mutex>
#include <random>
#include <thread>
#include <utility>
#include <vector>
#include <atomic>
#include <future>
#include <numeric>		// std::inner_product
#include <execution>	// parallel execution

using namespace std;

mutex mtx;

void DotProductNaive(const vector<int>& v0, const vector<int>& v1, const unsigned int start, const unsigned int end, unsigned long long& sum)
{
	for (unsigned int i = start; i < end; i++)
	{
		sum += v0[i] * v1[i];
	}
}

void DotProductLock(const vector<int>& v0, const vector<int>& v1, const unsigned int start, const unsigned int end, unsigned long long& sum)
{
	for (unsigned int i = start; i < end; i++)
	{
		std::scoped_lock lock(mtx);	// c++17

		sum += v0[i] * v1[i];
	}
}

void DotProductAtomic(const vector<int>& v0, const vector<int>& v1, const unsigned int start, const unsigned int end, atomic<unsigned long long>& sum)
{
	for (unsigned int i = start; i < end; i++)
	{
		sum += v0[i] * v1[i];
	}
}

auto DotProductFuture(const vector<int>& v0, const vector<int>& v1, const unsigned int start, const unsigned int end)
{
	int sum = 0;	// local sum

	for (unsigned int i = start; i < end; i++)
	{
		sum += v0[i] * v1[i];
	}

	return sum;
}

int main()
{
	const long long n_data = 100'000'000;
	const unsigned int n_threads = 4;

	vector<int> v0, v1;
	v0.reserve(n_data);
	v1.reserve(n_data);

	random_device seed;
	mt19937 engine(seed());

	uniform_int_distribution<> uniformDist(1, 10);

	for (long long i = 0; i < n_data; i++)
	{
		v0.push_back(uniformDist(engine));
		v1.push_back(uniformDist(engine));
	}

	cout << "std::inner_product" << endl;
	{
		const auto sta = chrono::steady_clock::now();

		const auto sum = std::inner_product(v0.begin(), v0.end(), v1.begin(), 0ull);

		const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

		cout << dur.count() << endl;
		cout << sum << endl;
		cout << endl;
	}

	//cout << "Naive" << endl;
	//{
	//	const auto sta = chrono::steady_clock::now();

	//	unsigned long long sum = 0;
	//	
	//	vector<thread> threads;
	//	threads.reserve(n_threads);

	//	const unsigned int n_per_thread = n_data / n_threads;	// assumes remainder = 0
	//	for (unsigned int i = 0; i < n_threads; i++)
	//	{
	//		threads[i] = std::thread(DotProductNaive, std::ref(v0), std::ref(v1), i * n_per_thread, (i + 1) * n_per_thread, std::ref(sum));
	//	}

	//	for (unsigned int i = 0; i < n_threads; i++)
	//	{
	//		threads[i].join();
	//	}

	//	const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

	//	cout << dur.count() << endl;
	//	cout << sum << endl;
	//	cout << endl;
	//}

	cout << "Lockguard" << endl;
	{
		const auto sta = chrono::steady_clock::now();

		unsigned long long sum = 0;

		vector<thread> threads;
		threads.reserve(n_threads);

		const unsigned int n_per_thread = n_data / n_threads;	// assumes remainder = 0
		for (unsigned int i = 0; i < n_threads; i++)
		{
			threads[i] = std::thread(DotProductLock, std::ref(v0), std::ref(v1), i * n_per_thread, (i + 1) * n_per_thread, std::ref(sum));
		}

		for (unsigned int i = 0; i < n_threads; i++)
		{
			threads[i].join();
		}

		const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

		cout << dur.count() << endl;
		cout << sum << endl;
		cout << endl;
	}

	cout << "Atomic" << endl;
	{
		const auto sta = chrono::steady_clock::now();

		atomic<unsigned long long> sum = 0;

		vector<thread> threads;
		threads.reserve(n_threads);

		const unsigned int n_per_thread = n_data / n_threads;	// assumes remainder = 0
		for (unsigned int i = 0; i < n_threads; i++)
		{
			threads[i] = std::thread(DotProductAtomic, std::ref(v0), std::ref(v1), i * n_per_thread, (i + 1) * n_per_thread, std::ref(sum));
		}

		for (unsigned int i = 0; i < n_threads; i++)
		{
			threads[i].join();
		}

		const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

		cout << dur.count() << endl;
		cout << sum << endl;
		cout << endl;
	}

	cout << "Future" << endl;
	{
		const auto sta = chrono::steady_clock::now();

		unsigned long long sum = 0;

		vector<std::future<int>> futures;
		futures.reserve(n_threads);

		const unsigned int n_per_thread = n_data / n_threads;	// assumes remainder = 0
		for (unsigned int i = 0; i < n_threads; i++)
		{
			futures[i] = std::async(DotProductFuture, std::ref(v0), std::ref(v1), i * n_per_thread, (i + 1) * n_per_thread);
		}

		for (unsigned int i = 0; i < n_threads; i++)
		{
			sum += futures[i].get();
		}

		const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

		cout << dur.count() << endl;
		cout << sum << endl;
		cout << endl;
	}

	cout << "std::transform_reduce" << endl;
	{
		const auto sta = chrono::steady_clock::now();

		//const auto sum = std::transform_reduce(std::execution::seq, v0.begin(), v0.end(), v1.begin(), 0ull);
		const auto sum = std::transform_reduce(std::execution::par, v0.begin(), v0.end(), v1.begin(), 0ull);

		const chrono::duration<double> dur = chrono::steady_clock::now() - sta;

		cout << dur.count() << endl;
		cout << sum << endl;
		cout << endl;
	}

	return 0;
}