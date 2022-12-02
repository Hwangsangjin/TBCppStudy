#include <iostream>	// cout, cin, endl, ...
#include <cstdio>	// print

int main()
{
	using namespace std;

	/*
	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecture!\n"; // << endl;
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	cout << "\a";

	printf("I love this lecture!\n");
	*/

	int x = 1;
	cout << "Before your input, x was " << x << endl;

	cin >> x;
	cout << "Your input is " << x << endl;

	return 0;
}