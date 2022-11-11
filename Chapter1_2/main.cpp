// 전처리기
#include <iostream> // 표준 라이브러리

int main(void)
{
	int x = 2;
	x = 5;
	int y = x + 3;

	std::cout << 1 + 2 << std::endl; // 네임스페이스

	int sight = 10;

	// ...

	// 주석, 컴파일러가 코드를 무시

	// 마법의 물약을 먹어서 시야 거리가 0으로 변경
	sight = 0;

	return 0;
}