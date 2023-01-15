#include <iostream>

using namespace std;

inline int Min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	cout << Min(5, 6) << endl;
	cout << Min(3, 2) << endl;

	return 0;
}