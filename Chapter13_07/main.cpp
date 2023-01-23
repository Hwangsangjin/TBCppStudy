#include <iostream>

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
		: m_value(input)
	{}

	void Print()
	{
		cout << m_value << endl;
	}

private:
	T m_value;
};

template<typename T>
class A<T*>
{
public:
	A(T* input)
		: m_value(input)
	{}

	void Print()
	{
		cout << *m_value << endl;
	}

private:
	T* m_value;
};

int main()
{
	A<int> a_int(123);
	a_int.Print();

	int temp = 456;
	A<int*> a_int_ptr(&temp);
	a_int_ptr.Print();

	double temp_d = 3.141592;
	A<double*> a_double_ptr(&temp_d);
	a_double_ptr.Print();

	return 0;
}