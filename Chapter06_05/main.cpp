#include <iostream>

using namespace std;

int main()
{
	const int numRows = 3;
	const int numColumns = 5;

	for (size_t row = 0; row < numRows; row++)
	{
		for (size_t col = 0; col < numColumns; col++)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}
	cout << endl;

	int array[numRows][numColumns] =
	{
		{ 1, 2, 3, 4, 5 },		// row 0
		{ 6, 7, 8, 9, 10 },		// row 1
		{ 11, 12, 13, 14, 15 }	// row 2
	};

	for (size_t row = 0; row < numRows; row++)
	{
		for (size_t col = 0; col < numColumns; col++)
		{
			//cout << array[row][col] << '\t';
			cout << (int)&array[row][col] << '\t';
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}