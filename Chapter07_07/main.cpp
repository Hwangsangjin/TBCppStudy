#include <iostream>

using namespace std;

int Add(int x, int y)
{
	return x + y;
}

int Add(double x, double y)
{
	return x + y;
}

int main()
{
	Add(1, 2);
	Add(3.0, 4.0);

	return 0;
}