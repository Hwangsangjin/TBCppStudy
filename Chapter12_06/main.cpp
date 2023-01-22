#include <iostream>

using namespace std;

class Base
{
public:
	virtual void Func1() {}
	virtual void Func2() {}
};

class Derived : public Base
{
public:
	virtual void Func1() override {}
	void Func3() {}
};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;

	Base my_base;
	my_base.Func1();
	my_base.Func2();

	Derived my_derived;
	my_derived.Func1();
	my_derived.Func2();
	my_derived.Func3();

	return 0;
}