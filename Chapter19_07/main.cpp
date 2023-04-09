#include <iostream>
#include <vector>
#include <cstdio>
#include <utility>	// std::forward

using namespace std;

class CustomVector
{
public:
	unsigned int m_data = 0;
	int* m_ptr = nullptr;

	CustomVector(const unsigned int& data, const int& init = 0)
	{
		cout << "Constructor" << endl;

		Init(data, init);
	}

	CustomVector(CustomVector& l_input)
	{
		cout << "Copy constructor" << endl;

		Init(l_input.m_data);

		for (unsigned int i = 0; i < m_data; i++)
		{
			m_ptr[i] = l_input.m_ptr[i];
		}
	}

	CustomVector(CustomVector&& r_input)
	{
		cout << "Move constructor" << endl;

		m_data = r_input.m_data;
		m_ptr = r_input.m_ptr;

		r_input.m_data = 0;
		r_input.m_ptr = nullptr;
	}

	~CustomVector()
	{
		delete[] m_ptr;
		m_ptr = nullptr;
	}

	void Init(const unsigned int& data, const int& init = 0)
	{
		m_data = data;
		m_ptr = new int[data];
		for (unsigned int i = 0; i < m_data; i++)
		{
			m_ptr[i] = init;
		}
	}
};

void DoSomething(CustomVector& vec)
{
	cout << "Pass by L-reference" << endl;
	CustomVector new_vec(vec);
}

void DoSomething(CustomVector&& vec)
{
	cout << "Pass by R-reference" << endl;
	CustomVector new_vec(std::move(vec));
}

template<typename T>
void DoSomethingTemplate(T&& vec)
{
	DoSomething(std::forward<T>(vec));
}

int main()
{
	CustomVector my_vec(10, 1024);

	/*DoSomething(my_vec);
	DoSomething(CustomVector(10, 8));*/

	DoSomethingTemplate(my_vec);
	DoSomethingTemplate(CustomVector(10, 8));

	return 0;
}