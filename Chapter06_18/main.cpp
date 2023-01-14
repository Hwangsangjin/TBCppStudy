#include <iostream>

using namespace std;

int main()
{
	int i = 5;

	void* ptr = nullptr;
	ptr = &i;

	cout << &i << " " << ptr << endl;
	cout << *static_cast<int*>(ptr) << endl;

	return 0;
}