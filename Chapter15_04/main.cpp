#include "AutoPtr.h"
#include "Resource.h"
#include <vector>
#include <string>

using namespace std;

template <typename T>
void MySwap(T& a, T& b)
{
	/*T temp = a;
	a = b;
	b = temp;*/

	T temp{ std::move(a) };
	a = std::move(b);
	b = std::move(temp);
}

int main()
{
	/*{
		AutoPtr<Resource<int>> res1(new Resource<int>(10000000));

		cout << res1.m_ptr << endl;

		AutoPtr<Resource<int>> res2 = std::move(res1);

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}*/

	/*{
		AutoPtr<Resource<int>> res1(new Resource<int>(3));
		res1->SetAll(3);

		AutoPtr<Resource<int>> res2(new Resource<int>(5));
		res2->SetAll(5);

		res1->Print();
		res2->Print();

		MySwap(res1, res2);

		res1->Print();
		res2->Print();
	}*/

	/*{
		vector<string> v;
		string str{ "Hello" };

		v.push_back(str);

		cout << str << endl;
		cout << v[0] << endl;

		v.push_back(std::move(str));

		cout << str << endl;
		cout << v[0] << " " << v[1]<< endl;
	}*/

	{
		string x{ "abc" };
		string y{ "de" };

		cout << x << endl;
		cout << y << endl;

		MySwap(x, y);

		cout << x << endl;
		cout << y << endl;
	}

	return 0;
}