#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec = { 1, 2, 3, 4, 5 };

	cout << vec.size() << endl;

	for (const auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << vec[0] << endl;
	cout << vec.at(0) << endl;

	vec.resize(10);
	for (const auto& i : vec)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}