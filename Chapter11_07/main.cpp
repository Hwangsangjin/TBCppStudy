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

	friend ostream& operator<<(ostream& out, const Base& base)
	{
		out << "This is base output";
		return out;
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

	void Print()
	{
		Base::Print();
		cout << "I'm derived" << endl;
	}

	friend ostream& operator<<(ostream& out, const Derived& derived)
	{
		cout << static_cast<Base>(derived) << endl;
		out << "This is derived output";
		return out;
	}

private:
	double m_d;
};

int main()
{
	Base base(5);
	base.Print();
	cout << base << endl;

	Derived derived(7);
	derived.Print();
	cout << derived << endl;

	return 0;
}