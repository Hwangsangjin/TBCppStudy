#include <iostream>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A');

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	// C style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// C++ style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	// C++ style casting (complier)
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	return 0;
}