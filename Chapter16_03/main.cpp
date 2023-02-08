#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	//vector<int> container;
	list<int> container;
	for (size_t i = 0; i < 10; i++)
	{
		container.push_back(i);
	}

	auto iter = std::min_element(container.begin(), container.end());
	cout << *iter << endl;

	iter = std::max_element(container.begin(), container.end());
	cout << *iter << endl;

	iter = std::find(container.begin(), container.end(), 3);
	container.insert(iter, 128);

	for (const auto& i : container)
	{
		cout << i << " ";
	}
	cout << endl;

	//std::sort(container.begin(), container.end());
	container.sort();

	for (const auto& i : container)
	{
		cout << i << " ";
	}
	cout << endl;

	//std::reverse(container.begin(), container.end());
	container.reverse();

	for (const auto& i : container)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}