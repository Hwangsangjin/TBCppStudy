#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
	{}

	void DoSomething()
	{
		cout << typeid(T).name() << endl;
	}

	void Test()
	{}
};

template<>
class A<char>
{
public:
	A(const char& temp)
	{}

	void DoSomething()
	{
		cout << "char type specialization" << endl;
	}
};

int main()
{
	A<int> a_int(1);
	A<double> a_double(3.14);
	A<char> a_char('a');

	a_int.DoSomething();
	a_double.DoSomething();
	a_char.DoSomething();

	Storage8<int> intStorage;

	for (size_t i = 0; i < 8; i++)
	{
		intStorage.Set(i, i);
	}

	for (size_t i = 0; i < 8; i++)
	{
		cout << intStorage.Get(i) << endl;
	}

	cout << "sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

	Storage8<int> boolStorage;

	for (size_t i = 0; i < 8; i++)
	{
		boolStorage.Set(i, i);
	}

	for (size_t i = 0; i < 8; i++)
	{
		cout << boolStorage.Get(i) << endl;
	}

	cout << "sizeof Storage8<bool> " << sizeof(Storage8<bool>) << endl;

	return 0;
}