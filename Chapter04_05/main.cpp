#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;
	
	// 자료형 출력
	int a = 123;
	cout << typeid(a).name() << endl;
	cout << typeid(4.0).name() << endl;

	// 암시적 형변환
	float f = 3.14f;
	int i = f;

	cout << i << endl;

	// 명시적 형변환
	int j = static_cast<int>(4.0);
	cout << j << endl;

	return 0;
}