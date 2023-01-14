#include <iostream>

using namespace std;

struct Something
{
	int a, b, c, d;
};

int main()
{
	int x = 5;

	cout << x << endl;
	cout << &x << endl;	// & : address-of operator
	cout << (int)&x << endl;

	cout << *(&x) << endl;	// * : de-reference operator
	
	int* ptr_x = &x;
	
	cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(ptr_x) << endl;

	Something s;
	Something* ptr_s = &s;

	cout << sizeof(s) << endl;
	cout << sizeof(ptr_s) << endl;

	return 0;
}