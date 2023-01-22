#include <iostream>

using namespace std;

class Base
{
public:
	Base(int value)
		: m_value(value)
	{}

protected:
	int m_value;
};

class Derived : private Base
{
public:
	Derived(int value)
		: Base(value)
	{}

	void SetValue(int value)
	{
		Base::m_value = value;
		// do some work with the variables defined in Derived
	}
};

int main()
{


	return 0;
}