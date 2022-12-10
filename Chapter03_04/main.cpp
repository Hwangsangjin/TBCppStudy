#include <iostream>

using namespace std;

int main()
{
	float a;

	// sizeof operator
	cout <<	sizeof(float) << endl;
	cout << sizeof a << endl;	// ������ Ÿ���� ��ȣ ���� ����

	// comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);	// y ����
	cout << x << " " << y << " " << z << endl;
	z = x, y;			// x ����
	cout << x << " " << y << " " << z << endl;

	// conditional operator (arithmetric if)
	bool onSale = true;

	const int price = (onSale == true) ? 10 : 100;	// ������ true�� ��� 10 ����, false�� ��� 100 ����

	// price�� const�� ��� if-else ��� �Ұ�
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