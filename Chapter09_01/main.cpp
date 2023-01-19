#include <iostream>

using namespace std;

class Cents
{
public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int GetCents() const
	{
		return m_cents;
	}

	Cents operator+(const Cents& c2)
	{
		return Cents(this->m_cents + c2.GetCents());
	}

	/*friend Cents operator+(const Cents& c1, const Cents& c2)
	{
		return Cents(c1.GetCents() + c2.GetCents());
	}*/

private:
	int m_cents;
};

/*Cents operator+(const Cents& c1, const Cents& c2)
{
	return Cents(c1.GetCents() + c2.GetCents());
}*/

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(6) + Cents(10) + Cents(100)).GetCents() << endl;

	return 0;
}