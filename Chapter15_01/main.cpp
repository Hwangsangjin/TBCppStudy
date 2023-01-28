#include <iostream>
#include "AutoPtr.h"

using namespace std;

class Resource
{
public:
	Resource()
	{
		cout << "Resource constructed" << endl;
	}
	~Resource()
	{
		cout << "Resource destroyed" << endl;
	}

//private:
	int m_data[100]{};
};

// RAII : resource acquisition is intialization
void DoSomething()
{
	try
	{
		//Resource* res = new Resource;			// dull pointer
		AutoPtr<Resource> res(new Resource);	// smart pointer

		return;	// early return

		// work with res

		if (true)
		{
			throw - 1;	// exception
		}

		//delete res;
	}
	catch (...)
	{

	}
	
	return;
}

int main()
{
	//DoSomething();

	{
		AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;	// move semantics

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}

	return 0;
}