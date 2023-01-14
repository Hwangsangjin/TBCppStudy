#include <iostream>

using namespace std;

int main()
{
	int var;
	var = 7;

	int* ptr = new int;
	*ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr;

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	return 0;
}