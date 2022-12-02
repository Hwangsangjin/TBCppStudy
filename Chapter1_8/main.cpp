#include <iostream>

using namespace std;

int main()
{
	int x = 2;	// x는 변수, 2는 리터럴

	cout << -x << endl;	// - 단항 연산자
	
	cout << x + 2 << endl; // + 이항 연산자

	int y = (x > 0) ? 1 : 2;	// ? : 삼항 연산자

	cout << y << endl;

	cout << "Hello, World" << endl;	// 문자열은 리터럴

	return 0;
}