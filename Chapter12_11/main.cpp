#include <iostream>

using namespace std;

class Base
{
public:
	Base() {}

	friend ostream& operator<<(ostream& out, const Base& base)
	{
		return base.Print(out);
	}

	virtual ostream& Print(ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived() {}

	virtual ostream& Print(ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};

int main()
{
	Base base;
	cout << base << endl;

	Derived derived;
	cout << derived << endl;

	Base& ref = derived;
	cout << ref << endl;

	return 0;
}