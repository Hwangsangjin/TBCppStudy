#include <iostream>

using namespace std;

int main()
{
	float a;

	// sizeof operator
	cout <<	sizeof(float) << endl;
	cout << sizeof a << endl;	// 데이터 타입은 괄호 생략 가능

	// comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);	// y 대입
	cout << x << " " << y << " " << z << endl;
	z = x, y;			// x 대입
	cout << x << " " << y << " " << z << endl;

	// conditional operator (arithmetric if)
	bool onSale = true;

	const int price = (onSale == true) ? 10 : 100;	// 조건이 true인 경우 10 대입, false인 경우 100 대입

	// price가 const인 경우 if-else 사용 불가
	/*if (onSale)
	{
		price = 10;
	}
	else
	{
		price = 100;
	}*/

	cout << price << endl;

	return 0;
}