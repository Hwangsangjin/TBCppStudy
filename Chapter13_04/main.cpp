#include <iostream>
#include "Storage.h"

using namespace std;

template<typename T>
T GetMax(T x, T y)
{
	return (x > y) ? x : y;
}

template<>
char GetMax(char x, char y)
{
	cout << "Warning! comparing chars" << endl;

	return (x > y) ? x : y;
}

int main()
{
	cout << GetMax(1, 2) << endl;
	cout << GetMax('a', 'b') << endl;

	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.Print();
	dValue.Print();

	return 0;
}