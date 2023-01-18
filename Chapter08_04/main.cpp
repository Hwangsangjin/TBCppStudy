#include <iostream>

using namespace std;

class B
{
public:
	B(const int& b)
		: m_b{ b }
	{}

private:
	int m_b;
};

class Something
{
public:
	Something()
		: m_i{ 1 }
		, m_d{ 3.14 }
		, m_c{ 'a' }
		, m_arr{ 1, 2, 3, 4, 5 }
		, m_b{ m_i - 1 }
	{
		m_i *= 3;
		m_d *= 3.0;
		m_c += 3;
	}

	void Print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (const auto& i : m_arr)
		{
			cout << i << " ";
		}
		cout << endl;
	}

private:
	int m_i = 100;
	double m_d = 100.0;
	char m_c = 'F';
	int m_arr[5] = { 100, 200, 300, 400, 500 };
	B m_b = 1024;
};

int main()
{
	Something som;
	som.Print();

	return 0;
}