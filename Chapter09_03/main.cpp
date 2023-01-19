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

	Cents operator-() const
	{
		return Cents(-m_cents);
	}

	bool operator!() const
	{
		return (m_cents == 0) ? true : false;
	}

	friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

private:
	int m_cents;
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);

	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;

	cout << !cents1 << " " << !cents2 << endl;

	return 0;
}