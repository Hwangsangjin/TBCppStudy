#include <iostream>

using namespace std;

int main()
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	cout << **ptrptr << endl;

	const int row = 3;
	const int col = 5;

	const int static2DArray[][5] =
	{
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 }
	};

	int* matrix = new int[row * col];

	for (size_t r = 0; r < row; r++)
	{
		for (size_t c = 0; c < col; c++)
		{
			matrix[c + col * r] = static2DArray[r][c];
		}
	}

	for (size_t r = 0; r < row; r++)
	{
		for (size_t c = 0; c < col; c++)
		{
			cout << matrix[c + col * r] << '\t';
		}
		cout << endl;
	}

	delete[] matrix;

	/*int** matrix = new int* [row];

	for (size_t r = 0; r < row; r++)
	{
		matrix[r] = new int[col];
	}

	for (size_t r = 0; r < row; r++)
	{
		for (size_t c = 0; c < col; c++)
		{
			matrix[r][c] = static2DArray[r][c];
			cout << matrix[r][c] << '\t';
		}
		cout << endl;
	}

	for (size_t r = 0; r < row; r++)
	{
		delete[] matrix[r];
	}

	delete[] matrix;*/
	
	return 0;
}