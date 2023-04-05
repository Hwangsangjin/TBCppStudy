#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;

std::mutex mtx;

int main(void)
{
	int shared_memory(0);

	auto CountFunc = [&]()
	{
		for (int i = 0; i < 1000; i++)
		{
			std::this_thread::sleep_for(chrono::milliseconds(1));

			std::scoped_lock lock(mtx);

			shared_memory++;
		}
	};

	thread t1 = thread(CountFunc);
	thread t2 = thread(CountFunc);

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;

	return 0;
}