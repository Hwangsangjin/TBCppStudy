#include <iostream>

using namespace std;

void DoSomething(double* ptr)
{
	cout << "Address of pointer variable in DoSomething() " << &ptr << endl;

	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do noting" << endl;
	}
}

int main()
{
	double* ptr_c = NULL;	// C-style
	double* ptr = nullptr;	// Modern C++

	DoSomething(ptr);
	DoSomething(nullptr);

	double d = 123.4;

	DoSomething(&d);

	ptr = &d;

	DoSomething(ptr);

	cout << "Address of pointer variable in main() " << &ptr << endl;

	return 0;
}