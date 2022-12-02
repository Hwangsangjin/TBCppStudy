#include <iostream>

using namespace std;

namespace MySpace1
{
	namespace InnerSpace
	{
		int MyFunction()
		{
			return 0;
		}
	}

	int DoSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int DoSomething(int a, int b)
	{
		return a * b;
	}
}

int main()
{
	MySpace1::DoSomething(3, 4);

	using namespace MySpace1;
	DoSomething(3, 4);

	MySpace1::InnerSpace::MyFunction();

	using namespace MySpace1::InnerSpace;
	MyFunction();

	//cout << MySpace1::DoSomething(3, 4) << endl;
	//cout << MySpace2::DoSomething(3, 4) << endl;

	return 0;
}