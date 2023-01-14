#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void PrintLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	int arr[5] = { 5, 4, 3, 2, 1 };

	std::array<int, 5> my_arr = { 5, 4, 3, 2, 1 };

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl;

	cout << my_arr.size() << endl;
	PrintLength(my_arr);

	std::sort(my_arr.begin(), my_arr.end());
	for (const auto& i : my_arr)
	{
		cout << i << " ";
	}
	cout << endl;

	std::sort(my_arr.rbegin(), my_arr.rend());
	for (const auto& i : my_arr)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}