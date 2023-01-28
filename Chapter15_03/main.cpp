#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

AutoPtr<Resource<int>> GenerateResource()
{
	AutoPtr<Resource<int>> res(new Resource<int>(10000000));
	return res;
}

int main()
{
	AutoPtr<Resource<int>> main_res;
	main_res = GenerateResource();

	return 0;
}