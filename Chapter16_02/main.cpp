#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	//vector<int> container;
	//list<int> container;
	//set<int> container;
	map<int, char> container;
	for (size_t i = 0; i < 10; i++)
	{
		//container.push_back(i);
		//container.insert(i);
		container.insert(make_pair(i, char(i + 65)));
	}

	//vector<int>::iterator iter;
	//list<int>::iterator iter;
	//vector<int>::const_iterator iter;
	//list<int>::const_iterator iter;
	//set<int>::const_iterator iter;
	map<int, char>::const_iterator iter;
	iter = container.begin();
	while (iter != container.end())
	{
		//cout << *iter << " ";
		cout << iter->first << iter->second << " ";
		++iter;
	}
	cout << endl;

	for (auto iter = container.begin(); iter != container.end(); ++iter)
	{
		//cout << *iter << " ";
		cout << iter->first << iter->second << " ";
	}
	cout << endl;

	for (const auto& i : container)
	{
		//cout << i << " ";
		cout << i.first << i.second << " ";
	}
	cout << endl;

	return 0;
}