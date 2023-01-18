#include <iostream>

using namespace std;

class Simple
{
public:
	Simple(int id)
	{
		SetID(id);

		cout << this << endl;
	}

	void SetID(int id)
	{
		m_id = id;
	}

	int GetID()
	{
		return m_id;
	}

public:
	int m_id;
};

class Calc
{
public:
	Calc(int value)
		: m_value(value)
	{}

	Calc& Add(int value) { m_value += value; return *this; }
	Calc& Sub(int value) { m_value -= value; return *this; }
	Calc& Mul(int value) { m_value *= value; return *this; }

	void Print() { cout << m_value << endl; }

private:
	int m_value;
};

int main()
{
	Simple s1(1), s2(2);
	s1.SetID(2);
	s2.SetID(4);

	cout << &s1 << " " << &s2 << endl;

	Calc cal(10);
	cal.Add(10).Sub(1).Mul(2).Print();
	/*cal.Add(10);
	cal.Sub(1);
	cal.Mul(2);
	cal.Print();*/

	return 0;
}