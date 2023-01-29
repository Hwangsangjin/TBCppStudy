#include "Resource.h"
#include <memory>

using namespace std;

auto DoSomething()
{
	/*auto res1 = std::make_unique<Resource<int>>(5);
	return res1;*/

	//return std::unique_ptr<Resource<int>>(new Resource<int>(5));

	return std::make_unique<Resource<int>>(5);
}

//void DoSomething2(std::unique_ptr<Resource<int>>& res)
void DoSomething2(Resource<int>* res)
{
	res->SetAll(10);
}

int main()
{
	/*{
		//Resource<int>* res = new Resource<int>(10000000);

		std::unique_ptr<Resource<int>> res(new Resource<int>(10000000));

		// Early return or throw

		//delete res;
	}*/

	/*{
		std::unique_ptr<int> upi(new int);

		//std::unique_ptr<Resource<int>> res1(new Resource<int>(5));
		//auto res1 = std::make_unique<Resource<int>>(5);
		auto res1 = DoSomething();

		res1->SetAll(5);
		res1->Print();

		std::unique_ptr<Resource<int>> res2;

		cout << std::boolalpha;
		cout << static_cast<bool>(res1) << endl;
		cout << static_cast<bool>(res2) << endl;

		//res2 = res1;
		res2 = std::move(res1);

		cout << std::boolalpha;
		cout << static_cast<bool>(res1) << endl;
		cout << static_cast<bool>(res2) << endl;

		if (res1 != nullptr)
		{
			res1->Print();
		}

		if (res2 != nullptr)
		{
			res2->Print();
		}
	}*/

	/*{
		auto res1 = std::make_unique<Resource<int>>(5);
		res1->SetAll(1);
		res1->Print();

		//DoSomething2(res1);
		DoSomething2(res1.get());

		res1->Print();
	}*/

	{
		Resource<int>* res = new Resource<int>;
		std::unique_ptr<Resource<int>> res1(res);
		//std::unique_ptr<Resource<int>> res2(res);	// X

		//delete res;	// X
	}

	return 0;
}