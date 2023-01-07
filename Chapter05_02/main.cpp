#include <iostream>

using namespace std;

int Min(int x, int y)
{
	/*if (x > y)
	{
		return y;
	}
	else
	{
		return x;
	}*/

	return (x > y) ? y : x;
}

int main()
{
	int x;
	cin >> x;

	if (x > 10)
	{
		cout << x << " is greater than 10" << endl;
	}
	else if (x < 10)
	{
		cout << x << " is less than 10" << endl;
	}
	else
	{
		cout << x << " is exactly 10" << endl;
	}

	return 0;
}