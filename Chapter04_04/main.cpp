#include <iostream>

// ��ȯ �ڷ��� �߷�
auto Add(int x, int y) -> int	// Ʈ���ϸ�(���� ����)
{
	return x + y;
}

int main()
{
	using namespace std;

	// �ڷ��� �߷�
	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = Add(1, 2);

	return 0;
}