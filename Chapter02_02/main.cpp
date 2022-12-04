#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	cout << sizeof(short) << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::max() << endl;

	cout << sizeof(int) << endl;
	cout << std::numeric_limits<int>::min() << endl;
	cout << std::numeric_limits<int>::max() << endl;

	cout << sizeof(long) << endl;
	cout << std::numeric_limits<long>::min() << endl;
	cout << std::numeric_limits<long>::max() << endl;

	cout << sizeof(long long) << endl;
	cout << std::numeric_limits<long long>::min() << endl;
	cout << std::numeric_limits<long long>::max() << endl;

	cout << sizeof(unsigned short) << endl;
	cout << std::numeric_limits<unsigned short>::min() << endl;
	cout << std::numeric_limits<unsigned short>::max() << endl;

	cout << sizeof(unsigned int) << endl;
	cout << std::numeric_limits<unsigned int>::min() << endl;
	cout << std::numeric_limits<unsigned int>::max() << endl;

	cout << sizeof(unsigned long) << endl;
	cout << std::numeric_limits<unsigned long>::min() << endl;
	cout << std::numeric_limits<unsigned long>::max() << endl;

	cout << sizeof(unsigned long long) << endl;
	cout << std::numeric_limits<unsigned long long>::min() << endl;
	cout << std::numeric_limits<unsigned long long>::max() << endl;

	return 0;
}