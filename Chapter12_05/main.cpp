#include <iostream>

using namespace std;

int Add(int x, int y)
{
	return x + y;
}

int Subtract(int x, int y)
{
	return x - y;
}

int Multiply(int x, int y)
{
	return x * y;
}

int main()
{
	cout << "Input Numbers: ";
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0 : Add, 1 : Subtract, 2 : Multiply" << endl;
	cin >> op;

	// static binding (early binding)
	/*int result;

	switch (op)
	{
	case 0:
		result = Add(x, y);
		break;

	case 1:
		result = Subtract(x, y);
		break;

	case 2:
		result = Multiply(x, y);
		break;
	}

	cout << result << endl;*/

	// Dynamic binding (late binding)
	int(*func_ptr)(int, int) = nullptr;

	switch (op)
	{
	case 0:
		func_ptr = Add;
		break;

	case 1:
		func_ptr = Subtract;
		break;

	case 2:
		func_ptr = Multiply;
		break;
	}

	cout << func_ptr(x, y) << endl;

	return 0;
}