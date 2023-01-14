#include <iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

void DoSomething(int& n)
{
	cout << &n << endl;

	n = 10;
	cout << "In DoSomething " << n << endl;
}

void PrintElements(const int(&arr)[5])
{
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;

	int& ref = value;

	cout << value << " " << &value << endl;
	cout << ref << " " << &ref << endl;
	cout << *ptr << " " << ptr << endl;
	cout << *ptr << " " << &ptr << endl;

	int x = 5;
	int& ref_x = x;

	const int y = 8;
	const int& ref_y = y;

	int value1 = 5;
	int value2 = 10;

	int& ref1 = value1;
	cout << ref1 << endl;
	ref1 = value2;
	cout << ref1 << endl;

	int n = 5;
	cout << n << endl;

	DoSomething(n);
	cout << n << endl;
	cout << &n << endl;

	const int length = 5;
	int arr[length] = { 1, 2, 3, 4, 5 };

	PrintElements(arr);

	Other ot;
	int& v1 = ot.st.v1;
	v1 = 1.0;

	return 0;
}