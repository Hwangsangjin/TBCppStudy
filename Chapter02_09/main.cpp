#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void PrintNumber(const int& my_number)
{
	int n = my_number;

	cout << n << endl;
}

int main()
{
	PrintNumber(123);

	// ������ Ÿ�� ���
	constexpr double gravity(9.8);
	//gravity = 1.2;

	// ��Ÿ�� ���
	int number;
	cin >> number;
	const int special_number(number);

	double radius;
	cin >> radius;
	const double circumference = 2.0 * radius * constants::pi;

	return 0;
}