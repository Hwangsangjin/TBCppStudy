#include <iostream>

using namespace std;

void DoSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	DoSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;

	DoSomething(x);
	DoSomething(x + 1);

	return 0;
}