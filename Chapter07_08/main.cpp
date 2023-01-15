#include <iostream>

using namespace std;

void Print(int x = 0);	// in header

int main()
{
	Print(10);
	Print();

	return 0;
}

void Print(int x)
{
	cout << x << endl;
}