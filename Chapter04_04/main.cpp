#include <iostream>

// 반환 자료형 추론
auto Add(int x, int y) -> int	// 트레일링(선택 사항)
{
	return x + y;
}

int main()
{
	using namespace std;

	// 자료형 추론
	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = Add(1, 2);

	return 0;
}