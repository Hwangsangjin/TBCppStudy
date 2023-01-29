#include "Resource.h"

using namespace std;

int main()
{
	/*Resource<int>* res = new Resource<int>(3);
	res->SetAll(1);*/

	{
		//std::shared_ptr<Resource<int>> ptr1(res);

		auto ptr1 = std::make_shared<Resource<int>>(3);

		ptr1->SetAll(1);
		ptr1->Print();

		{
			//std::shared_ptr<Resource<int>> ptr2(ptr1);
			auto ptr2 = ptr1;

			ptr2->SetAll(3);
			ptr2->Print();

			cout << "Going out of the inner block" << endl;
		}

		ptr1->Print();

		cout << "Going out of the outer block" << endl;
	}

	return 0;
}