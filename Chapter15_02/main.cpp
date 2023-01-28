#include <iostream>

using namespace std;

void DoSomething(const int& lref)
{
	cout << "L-value ref" << endl;
}

void DoSomething(const int&& rref)
{
	cout << "R-value ref" << endl;
}

int GetResult()
{
	return 100 * 100;
}

int main()
{
	int x = 5;
	int y = GetResult();
	const int cx = 6;
	const int cy = GetResult();

	// L-value references

	int& lr1 = x;			// Modifiable l-values
	//int& lr2 = cx;		// Non-modifiable l-values
	//int& lr3 = 5;			// R-values

	const int& lr4 = x;		// Modifiable l-values
	const int& lr5 = cx;	// Non-modifiable l-values
	const int& lr6 = 5;		// R-values

	// R-value references

	//int&& rr1 = x;		// Modifiable l-values
	//int&& rr2 = cx;		// Non-modifiable l-values
	int&& rr3 = 5;			// R-values

	cout << rr3 << endl;
	rr3 = 10;
	cout << rr3 << endl;

	//const int&& rr4 = x;	// Modifiable l-values
	//const int&& rr5 = cx;	// Non-modifiable l-values
	const int&& rr6 = 5;	// R-values

	// L-R-value reference parameters
	DoSomething(x);
	DoSomething(cx);
	DoSomething(5);
	DoSomething(GetResult());

	return 0;
}