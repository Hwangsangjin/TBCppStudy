#include <iostream>

using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;

	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;

	int array[] = { 9, 7, 5, 3, 1 };
	int* ptr_array = array;

	for (size_t i = 0; i < 5; i++)
	{
		cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		cout << *(ptr_array + i) << " " << (uintptr_t)(ptr_array + i) << endl;
	}

	char name[] = "Jack Jack";
	const int n_name = sizeof(name) / sizeof(char);
	char* ptr_name = name;

	for (size_t i = 0; i < n_name; i++)
	{
		cout << *(ptr_name + i);
	}
	cout << endl;

	while (true)
	{
		if (*ptr_name == '\0')
		{
			break;
		}

		cout << *ptr_name;
		++ptr_name;
	}

	return 0;
}