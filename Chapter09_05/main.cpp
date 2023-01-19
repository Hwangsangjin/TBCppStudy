#include <iostream>

using namespace std;

class Digit
{
public:
	Digit(int digit = 0)
		: m_digit(digit)
	{}

	// prefix
	Digit& operator++()
	{
		++m_digit;
		return *this;
	}

	// postfix
	Digit operator++(int)
	{
		Digit temp(m_digit);
		++(*this);
		return temp;
	}

	friend ostream& operator<<(ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}

private:
	int m_digit;
};

int main()
{
	Digit d(5);

	cout << ++d << endl;
	cout << d << endl;

	cout << d++ << endl;
	cout << d << endl;

	return 0;
}