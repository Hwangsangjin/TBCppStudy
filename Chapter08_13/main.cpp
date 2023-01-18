#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void Print()
	{
		cout << "Hello" << endl;
	}
};

class Cents
{
public:
	Cents(int cents)
	{
		m_cents = cents;
	}

	int GetCents() const
	{
		return m_cents;
	}

private:
	int m_cents;
};

Cents Add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.GetCents() + c2.GetCents());
}

int main()
{
	/*A a;
	a.Print();*/

	A().Print();
	A().Print();

	cout << Add(Cents(6), Cents(8)).GetCents() << endl;
	cout << int(6) + int(8) << endl;

	return 0;
}