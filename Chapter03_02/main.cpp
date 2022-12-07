#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	int y = 4;

	cout << x / y << endl;
	cout << x % y << endl;

	int z = x;
	z += y;	// z = z + y;

	cout << z << endl;

	return 0;
}