#include <iostream>

using namespace std;

int main()
{
	int apple = 5;
	cout << apple << endl;

	{
		int apple = 1;
		cout << apple << endl;
	}

	cout << apple << endl;

	return 0;
}