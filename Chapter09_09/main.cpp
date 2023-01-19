#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num)
		, m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction)	// copy constructor
		: m_numerator(fraction.m_numerator)
		, m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator<<(std::ostream& out, const Fraction& fraction)
	{
		out << fraction.m_numerator << " / " << fraction.m_denominator << endl;
		return out;
	}

private:
	int m_numerator;
	int m_denominator;
};

Fraction DoSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}

int main()
{
	Fraction fraction(3, 5);
	Fraction fraction_copy(fraction);
	cout << fraction << fraction_copy << endl;

	Fraction result = DoSomething();
	cout << &result << endl;
	cout << result << endl;

	return 0;
}