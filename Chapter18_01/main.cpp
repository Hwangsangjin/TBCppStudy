#include <iostream>
#include <string>
#include <iomanip>	// input/output manipulators

using namespace std;

int main()
{
	char buf[1024];

	cin >> buf;
	cout << buf << endl;

	cin.putback('A');

	cin >> buf;
	cout << buf << endl;

	return 0;
}