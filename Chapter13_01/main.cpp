#include <iostream>
#include "Cents.h"

using namespace std;

template<typename T>
T GetMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << GetMax(1, 2) << endl;
	cout << GetMax(3.14, 1.592) << endl;
	cout << GetMax(1.0f, 3.4f) << endl;
	cout << GetMax('a', 'c') << endl;

	cout << GetMax(Cents(5), Cents(9)) << endl;

	return 0;
}