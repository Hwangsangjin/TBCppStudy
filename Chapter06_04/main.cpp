#include <iostream>

using namespace std;

void PrintArray(const int array[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	/*				value	index
	3 5 2 1 4		  1		  3
	1 5 2 3 4		  2		  2
	1 2 5 3 4		  3		  3
	1 2 3 5 4		  4		  4
	1 2 3 4 5
	*/

	const int length = 5;
	int array[length] = { 3, 5, 2, 1, 4 };

	PrintArray(array, length);

	for (size_t startIndex = 0; startIndex < length - 1; startIndex++)
	{
		int smallestIndex = startIndex;

		for (size_t currentIndex = startIndex + 1; currentIndex < length; currentIndex++)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		// swap to values int the array
		// std::swap(array[smallestIndex], array[startIndex]);
		int temp = array[smallestIndex];
		array[smallestIndex] = array[startIndex];
		array[startIndex] = temp;

		PrintArray(array, length);
	}

	return 0;
}