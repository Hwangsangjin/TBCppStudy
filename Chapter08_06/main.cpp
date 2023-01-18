#include <iostream>

using namespace std;

class Simple
{
public:
	Simple(const int& id)
		: m_id(id)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}

private:
	int m_id;
};

class IntArray
{
public:
	IntArray(const unsigned int length)
	{
		m_length = length;
		m_arr = new int[m_length];

		cout << "Constructor" << endl;
	}

	~IntArray()
	{
		if (m_arr != nullptr)
		{
			delete[] m_arr;
		}

		cout << "Destructor" << endl;
	}

	int Size()
	{
		return m_length;
	}

private:
	int* m_arr = nullptr;
	unsigned int m_length = 0;
};

int main()
{
	//Simple s1(0);
	Simple* s1 = new Simple(0);
	Simple s2(1);

	delete s1;

	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}