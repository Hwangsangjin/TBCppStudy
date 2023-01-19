#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
public:
	Fraction(char) = delete;

	explicit Fraction(int num = 0, int den = 1)
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

void DoSomething(Fraction fraction)
{
	cout << fraction << endl;
}

int main()
{
	Fraction fraction(7);
	
	DoSomething(fraction);
	DoSomething(Fraction(7));
	//DoSomething(7);

	//DoSomething('a');

	return 0;
}