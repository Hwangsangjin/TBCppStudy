#include <iostream>
#include <cmath> // sqrt()

using namespace std;

int main()
{
	double x;

TryAgain: // label

	cout << "Enter a non-negative numver" << endl;
	cin >> x;

	if (x < 0.0)
	{
		goto TryAgain;
	}

	cout << sqrt(x) << endl;

	return 0;
}