#include <iostream>
#include <cstdarg>	// for ellipsis

using namespace std;

int FindAverage(int count, ...)
{
	int sum = 0;

	va_list list;

	va_start(list, count);

	for (size_t i = 0; i < count; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return sum / count;
}

int main()
{
	cout << FindAverage(1, 1, 2, 3) << endl;
	cout << FindAverage(3, 1, 2, 3) << endl;
	cout << FindAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << FindAverage(10, 1, 2, 3, 4, 5) << endl;

	return 0;
}