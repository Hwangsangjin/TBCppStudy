#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	stringstream os;

	os << "123456 67.89";

	os.str(string());
	os.clear();

	os << "Hello";

	cout << os.str() << endl;

	return 0;
}