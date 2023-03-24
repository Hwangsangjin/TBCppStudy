#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("aaaa");

	str.insert(2, "bbb");

	cout << str << endl;

	return 0;
}