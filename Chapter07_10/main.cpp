#include <iostream>

using namespace std;

int main()
{
	int array[100];		// stack memory

	int* ptr = nullptr;
	ptr = new int[100];	// heap memory

	delete[] ptr;
	ptr = nullptr;

	return 0;
}