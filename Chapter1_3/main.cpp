#include <iostream>

int main()
{
	// x라는 이름의 변수는 정수를 담을 수 있는 메모리 공간
	int x;

	// x라는 이름의 변수가 가리키고 있는 메모리 공간에 123이라는 정수를 저장
	x = 123; // =, 할당 연산자(대입)

	std::cout << x << std::endl;	// 메모리 공간에 저장된 값 출력
	std::cout << &x << std::endl;	// &(앰퍼샌드), 메모리 공간의 주소 출력

	/*
	int y;	// 변수를 초기화 하지 않으면 쓰레기 값 저장, 릴리즈 모드에서는 0을 자동으로 저장

	std::cout << y << std::endl;	// 에러 발생
	*/

	// 초기화
	int z = 123;
	int w(123);

	std::cout << z << std::endl;
	std::cout << w << std::endl;

	return 0;
}