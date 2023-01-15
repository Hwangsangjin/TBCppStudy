#include <iostream>

using namespace std;

void CountDown(int count)
{
	cout << count << endl;

	if (count > 0)
	{
		CountDown(count - 1);
	}
}

int Sum(const int& n)
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n <= 1)
	{
		return 1;
	}
	else
	{
		const int n_minus_one = Sum(n - 1);
		return n_minus_one + n;
	}
}

int Fibo(const int& n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		const int n_minus_two = Fibo(n - 2);
		const int n_minus_one = Fibo(n - 1);
		return n_minus_two + n_minus_one;
	}
}

int main()
{
	CountDown(5);

	cout << Sum(10) << endl;

	for (size_t i = 0; i < 10; i++)
	{
		cout << Fibo(i) << " ";
	}

	return 0;
}