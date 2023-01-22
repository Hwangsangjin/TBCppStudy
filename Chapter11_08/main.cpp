#include <iostream>

using namespace std;

class Base
{
public:
	Base(int value)
		: m_i(value)
	{}

	void Print()
	{
		cout << "I'm base" << endl;
	}

protected:
	int m_i;
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i;

private:
	double m_d;

	//using Base::Print;
	void Print() = delete;
};

int main()
{
	Base base(5);
	base.Print();

	Derived derived(7);
	derived.m_i = 1024;
	//derived.Print();

	return 0;
}