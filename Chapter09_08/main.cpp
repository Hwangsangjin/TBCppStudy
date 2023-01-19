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

	void SetCents(int cents)
	{
		m_cents = cents;
	}

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}

private:
	int m_cents;
};

void PrintInt(const int& value)
{
	cout << value << endl;
}

class Dollar
{
public:
	Dollar(const int& input)
		: m_dollars(input)
	{}

	operator Cents()
	{
		return Cents(m_dollars * 100);
	}

private:
	int m_dollars = 0;
};

int main()
{
	Dollar dollar(2);

	Cents cents = dollar;

	PrintInt(cents);

	/*int value;
	value = (int)cents;
	value = int(cents);
	value = static_cast<int>(cents);*/

	return 0;
}