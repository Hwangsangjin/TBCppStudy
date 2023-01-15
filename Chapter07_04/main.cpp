#include <iostream>

using namespace std;

void Foo(int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;

}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	cout << *ptr << " " <<  &ptr << endl;

	Foo(ptr);
	Foo(&value);

	return 0;
}