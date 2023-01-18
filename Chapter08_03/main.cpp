#include <iostream>

using namespace std;

class Fraction
{
public:
	Fraction() = default;
	Fraction(const int& numerator, const int& denominator = 1)
	{
		m_numerator = numerator;
		m_denominator = denominator;

		cout << "Fraction() constructor" << endl;
	}

	void Print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}

private:
	int m_numerator;
	int m_denominator;
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}

private:
	Second sec;
};

int main()
{
	Fraction frac;
	frac.Print();

	Fraction one_thirds(1, 3);
	one_thirds.Print();

	First fir;

	return 0;
}