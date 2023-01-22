#include <iostream>

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		//Base::m_private;
	}
};

class Test : public Derived
{
public:
	Test()
	{
		//Derived::m_public;
		//Derived::m_protected;
		//Derived::m_private;
	}
};

int main()
{


	return 0;
}