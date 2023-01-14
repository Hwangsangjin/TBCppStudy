#include <iostream>

using namespace std;

const char* GetName()
{
	return "Jack Jack";
}

int main()
{
	char name[] = "Jack Jack";
	const char* name_ptr = "Jack Jack";

	cout << name << endl;
	cout << (uintptr_t)name << endl;
	cout << name_ptr << endl;
	cout << (uintptr_t)name_ptr << endl;

	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name_ptr << endl;

	char c = 'Q';
	cout << &c << endl;
	cout << *&c << endl;

	return 0;
}