#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;
	
	// �ڷ��� ���
	int a = 123;
	cout << typeid(a).name() << endl;
	cout << typeid(4.0).name() << endl;

	// �Ͻ��� ����ȯ
	float f = 3.14f;
	int i = f;

	cout << i << endl;

	// ����� ����ȯ
	int j = static_cast<int>(4.0);
	cout << j << endl;

	return 0;
}