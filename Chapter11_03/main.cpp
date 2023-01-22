#include <iostream>

using namespace std;

class Parents
{
public:
	Parents(const int& i = 0)
		:m_i(i)
	{
		cout << "Parents construction" << endl;
	}

private:
	int m_i;
};

class Child : public Parents
{
public:
	Child()
		: Parents(1024)
		, m_d(1.0)
	{
		cout << "Child construction" << endl;
	}

private:
	double m_d;
};

int main()
{
	Child child;

	return 0;
}