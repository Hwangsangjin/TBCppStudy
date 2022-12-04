#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	cout << sizeof(float) << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<float>::max() << endl;

	cout << sizeof(double) << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<double>::max() << endl;

	cout << sizeof(long double) << endl;
	cout << numeric_limits<long double>::min() << endl;
	cout << numeric_limits<long double>::max() << endl;

	return 0;
}