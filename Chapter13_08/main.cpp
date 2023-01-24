#include <iostream>

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
		: m_value(input)
	{}

	template<typename TT>
	void DoSomething()
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)m_value << endl;
	}

	void Print()
	{
		cout << m_value << endl;
	}

private:
	T m_value;
};

int main()
{
	A<char> a_char('A');
	a_char.Print();

	a_char.DoSomething<int>();

	return 0;
}