#include <iostream>

using namespace std;

int main()
{
	int x = 0;

	cout << x << " " << &x << endl;

	{
		int x = 0;

		cout << x << " " << &x << endl;
	}

	{
		x = 2;

		cout << x << " " << &x << endl;
	}

	return 0;
}