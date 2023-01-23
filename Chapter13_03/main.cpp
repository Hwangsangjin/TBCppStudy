#include "MyArray.h"

using namespace std;

int main()
{
	MyArray<double, 10> my_array;

	for (size_t i = 0; i < my_array.GetLength(); i++)
	{
		my_array[i] = i + 0.5;
	}

	my_array.Print();

	return 0;
}