#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	Something()
	{
		cout << "Constructor" << endl;
	}

	Something(const Something& st)
	{
		m_value = st.m_value;

		cout << "Copy Constructor" << endl;
	}

	const int GetValue() const
	{
		return m_value;
	}

	void SetValue(const int& value)
	{
		m_value = value;
	}

	const string& GetName() const
	{
		cout << "const version" << endl;

		return m_name;
	}

	string& GetName()
	{
		cout << "non-const version" << endl;

		return m_name;
	}

private:
	int m_value = 0;
	string m_name = "default";
};

void Print(const Something& st)
{
	cout << &st << endl;

	cout << st.GetValue() << endl;
}

int main()
{
	Something something;
	cout << &something << endl;
	Print(something);

	Something something2;
	something2.GetName();

	const Something something3;
	something3.GetName();

	return 0;
}