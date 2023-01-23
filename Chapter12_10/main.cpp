#include <iostream>
#include <string>

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

class Derived1 : public Base
{
public:
	virtual void Print()
	{
		cout << "I'm derived" << endl;
	}

//private:
	int m_j = 1024;
};

class Derived2 : public Base
{
public:
	virtual void Print()
	{
		cout << "I'm derived" << endl;
	}

//private:
	string m_name = "Dr. Two";
};

int main()
{
	Derived1 derived1;

	// ...

	Base* base = &derived1;

	auto* base_to_derived1 = dynamic_cast<Derived1*>(base);
	if (base_to_derived1 != nullptr)
	{
		base_to_derived1->Print();
	}
	else
	{
		cout << "Failed" << endl;
	}

	auto* base_to_derived2 = dynamic_cast<Derived2*>(base);
	if (base_to_derived2 != nullptr)
	{
		base_to_derived2->Print();
	}
	else
	{
		cout << "Failed" << endl;
	}

	return 0;
}