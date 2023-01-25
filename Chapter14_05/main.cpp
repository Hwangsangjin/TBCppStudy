#include <iostream>

using namespace std;

class A
{
public:
	A(int x)
		: m_x(x)
	{
		if (x <= 0)
		{
			throw 1;
		}
	}

private:
	int m_x;
};

class B : public A
{
public:
	/*B(int x)
		: A(x)
	{}*/

	B(int x) try
		: A(x)
	{
		// do initialization
	}
	catch (...)
	{
		cout << "Catch in B constructor" << endl;
		//throw;
	}
};

/*void DoSomething() try
{
	throw - 1;
}
catch (...)
{
	cout << "Catch in DoSomething()" << endl;
}*/

int main()
{
	try
	{
		//DoSomething();
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}

	return 0;
}