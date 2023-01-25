#include <iostream>

using namespace std;

class A
{
public:
	~A()
	{
		//throw "Error";
	}
};

int main()
{
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}