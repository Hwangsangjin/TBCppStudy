#include <iostream>

using namespace std;

void DoSomething(const int& x)
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	DoSomething(a);
	DoSomething(2);
	DoSomething(a + 3);
	DoSomething(3 * 4);

	return 0;
}