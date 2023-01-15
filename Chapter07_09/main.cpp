#include <iostream>
#include <array>
#include <functional>

using namespace std;

int Func(int x)
{
	return x + 1;
}

int Foo(int x)
{
	return x + 2;
}

bool IsEven(const int& number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool IsOdd(const int& number)
{
	if (number % 2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//void PrintNumbers(const array<int, 10>& my_array, bool (*check_func)(const int&))
void PrintNumbers(const array<int, 10>& my_array, std::function<bool(const int&)> check_func)
{
	for (const auto& i : my_array)
	{
		if (check_func(i) == true)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}

int main()
{
	int(*func_ptr)(int) = Func;
	cout << func_ptr(1) << endl;
	func_ptr = Foo;
	cout << func_ptr(1) << endl;

	std::array<int, 10> my_array{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	PrintNumbers(my_array, IsEven);
	PrintNumbers(my_array, IsOdd);

	std::function<bool(const int&)> function_ptr = IsEven;
	PrintNumbers(my_array, function_ptr);
	function_ptr = IsOdd;
	PrintNumbers(my_array, function_ptr);

	return 0;
}