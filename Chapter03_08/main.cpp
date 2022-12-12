#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// <<, >>
	// ~, &, |, ^

	unsigned int a = 3;
	cout << std::bitset<4>(a) << endl;

	unsigned int b = a << 1;
	cout << std::bitset<4>(b) << endl;

	unsigned int c = ~b;
	cout << std::bitset<4>(c) << endl;

	unsigned int x = 0b1100;
	unsigned int y = 0b0110;

	cout << std::bitset<4>(x & y) << endl;
	cout << std::bitset<4>(x | y) << endl;
	cout << std::bitset<4>(x ^ y) << endl;

	return 0;
}