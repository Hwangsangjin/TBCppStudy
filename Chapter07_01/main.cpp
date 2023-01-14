#include <iostream>

using namespace std;

int Foo(int x, int y);

int main()
{
	int x = 1, y = 2;

	Foo(6, 7);	// 6, 7 : arguments (actual parameters)
	Foo(x, y + 1);

	return 0;
}

int Foo(int x, int y)
{
	return x + y;
}	// x and y are destroyed here