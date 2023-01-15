#include <iostream>
#include <cassert>	// assert.h
#include <array>

using namespace std;

void PrintValue(const std::array<int, 5>& my_array, const int& index)
{
	assert(index >= 0);
	assert(index <= my_array.size() - 1);

	cout << my_array[index] << endl;
}

int main()
{
	const int x = 5;
	assert(x == 5);
	static_assert(x == 5, "x should be 5");

	std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };
	PrintValue(my_array, 100);

	return 0;
}