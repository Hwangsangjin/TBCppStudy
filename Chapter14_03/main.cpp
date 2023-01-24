#include <iostream>

using namespace std;

class Exception
{
public:
	void Report()
	{
		cerr << "Exception report" << endl;
	}
};

class ArrayException : public Exception
{
public:
	void Report()
	{
		cerr << "Array exception" << endl;
	}
};

class MyArary
{
public:
	int& operator[](const int& index)
	{
		if (index < 0 || index >= 5)
		{
			throw ArrayException();
		}

		return m_data[index];
	}

private:
	int m_data[5];
};

void DoSomething()
{
	MyArary my_array;

	try
	{
		my_array[100];
	}
	catch (const int& x)
	{
		cerr << "Exception " << x << endl;
	}
	/*catch (ArrayException& e)
	{
		cout << "DoSomething()" << endl;
		e.Report();
		throw e;
	}*/
	catch (Exception& e)
	{
		cout << "DoSomething()" << endl;
		e.Report();
		//throw e;
		throw;
	}
}

int main()
{
	try
	{
		DoSomething();
	}
	catch (ArrayException& e)
	{
		cout << "main()" << endl;
		e.Report();
	}
	catch (Exception& e)
	{
		cout << "main()" << endl;
		e.Report();
	}

	return 0;
}