#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (size_t i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return result;
}

int main()
{
	for (size_t i = 0; i < 10; i++)	// iteration
	{
		cout << i << endl;
	}

	for (int i = 9; i >= 0; i--)
	{
		cout << i << endl;
	}

	for (int i = 0, j = 0; (i + j) < 10; i++, j += 2)
	{
		cout << i << " " << j << endl;
	}

	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			cout << i << " " << j << endl;
		}
	}

	return 0;
}