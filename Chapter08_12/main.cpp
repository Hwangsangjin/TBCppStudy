#include <iostream>

using namespace std;

class A;	// forward declaration

class B
{
public:
	void DoSomething(A& a);

private:
	int m_value = 2;
};

class A
{
private:
	int m_value = 1;

	//friend class B;
	friend void B::DoSomething(A& a);
};

void B::DoSomething(A& a)
{
	cout << a.m_value << endl;
}

int main()
{
	A a;
	B b;
	b.DoSomething(a);

	return 0;
}