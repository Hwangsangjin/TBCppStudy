#include "MyArray.h"

using namespace std;

int main()
{
	MyArray<char> my_array(10);

	for (size_t i = 0; i < my_array.GetLength(); i++)
	{
		my_array[i] = i + 65;
	}

	my_array.Print();

	return 0;
}