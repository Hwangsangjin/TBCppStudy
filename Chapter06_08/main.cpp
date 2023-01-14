#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
};

void DoSomething(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
}

//void PrintArray(int array[])
void PrintArray(int* array)
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	*array = 100;
}

int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };

	cout << array << endl;
	cout << &(array[0]) << endl;

	cout << *array << endl;

	cout << sizeof(array) << endl;

	int* ptr = array;

	cout << sizeof(ptr) << endl;

	PrintArray(array);

	cout << array[0] << endl;

	MyStruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	DoSomething(ms);

	return 0;
}