#include <iostream>

using namespace std;

// 전방 선언
int Add(int a, int b);
int Multiply(int a, int b);
int Subtract(int a, int b);

int main()
{
	cout << Add(1, 2) << endl;
	cout << Multiply(1, 2) << endl;
	cout << Subtract(1, 2) << endl;

	return 0;
}

// 함수 정의
int Add(int a, int b)
{
	return a + b;
}

int Multiply(int a, int b)
{
	return a * b;
}

int Subtract(int a, int b)
{
	return a - b;
}