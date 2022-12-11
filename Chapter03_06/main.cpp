#include <iostream>

using namespace std;

int main()
{
	// Logical NOT
	bool a = true;

	cout << !a << endl;

	// Logical AND
	bool b = true;
	bool c = false;

	cout << (b && c) << endl;

	// Logical OR
	bool d = true;
	bool e = false;

	cout << (d || e) << endl;

	// Short Circuit Evaluation
	int x = 1;
	int y = 2;

	if (x == 2 && y++ == 2)
	{
		// do something
	}

	cout << y << endl;

	return 0;
}