#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
	virtual void Print()
	{
		cout << "I'm base" << endl;
	}

//private:
	int m_i = 0;
};

class Derived : public Base
{
public:
	virtual void Print()
	{
		cout << "I'm derived" << endl;
	}

//private:
	int m_j = 1;
};

void DoSomething(Base& base)
{
	base.Print();
}

int main()
{
	Base base;
	Derived derived;

	DoSomething(base);
	DoSomething(derived);

	std::vector<Base*> ptr_vec;
	ptr_vec.push_back(&base);
	ptr_vec.push_back(&derived);

	for (const auto& i : ptr_vec)
	{
		i->Print();
	}

	std::vector<std::reference_wrapper<Base>> ref_vec;
	ref_vec.push_back(base);
	ref_vec.push_back(derived);

	for (const auto& i : ref_vec)
	{
		i.get().Print();
	}

	return 0;
}