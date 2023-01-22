#include <iostream>

using namespace std;

class Parents
{
public:
	Parents() = default;

	Parents (const int& i)
		: m_i(i)
	{
		cout << "Parents constructor" << endl;
	}

	int GetValue()
	{
		return m_i;
	}

	void SetValue(const int& i)
	{
		m_i = i;
	}

private:
	int m_i;
};

class Child : public Parents
{
public:
	Child(const int& i, const double& d)
		: Parents(i), m_d(d)
	{}

	void SetValue(const int& i, const double& d)
	{
		Parents::SetValue(i);
		m_d = d;
	}

	void SetValue(const double& d)
	{
		m_d = d;
	}

	double GetValue()
	{
		return m_d;
	}

private:
	double m_d;
};

int main()
{
	Parents parents(1204);
	//parents.SetValue(1024);
	cout << parents.GetValue() << endl;

	Child child(1024, 128);
	/*child.Parents::SetValue(1024);
	child.SetValue(128);*/
	cout << child.Parents::GetValue() << endl;
	cout << child.GetValue() << endl;

	return 0;
}