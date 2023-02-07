#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>

using namespace std;

void SequenceContainers()
{
	// vector
	{
		cout << "vector" << endl;

		std::vector<int> vec;	// #include <vector>
		for (size_t i = 0; i < 10; i++)
		{
			vec.push_back(i);
		}

		for (const auto& i : vec)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	// deque
	{
		cout << "deque" << endl;

		std::deque<int> deq;	// #include <deque>
		for (size_t i = 0; i < 10; i++)
		{
			deq.push_back(i);
			deq.push_front(i);
		}

		for (auto& i : deq)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}

void AssociativeContainers()
{
	// set
	{
		cout << "set" << endl;

		std::set<string> str_set;
		str_set.insert("Hello");
		str_set.insert("world");
		str_set.insert("Hello");

		cout << str_set.size() << " ";

		for (const auto& i : str_set)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	// multiset : duplication is allowed
	{
		cout << "multiset" << endl;

		std::multiset<string> str_set;
		str_set.insert("Hello");
		str_set.insert("world");
		str_set.insert("Hello");

		cout << str_set.size() << " ";

		for (const auto& i : str_set)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	// map : key/value
	{
		cout << "map" << endl;

		std::map<char, int> map;
		map['c'] = 50;
		map['a'] = 10;
		map['b'] = 20;

		for (const auto& i : map)
		{
			cout << i.first << " " << i.second << " ";
		}
		cout << endl;
	}

	// multimap : duplicated keys
	{
		cout << "multimap" << endl;

		std::multimap<char, int> map;
		map.insert(std::pair('a', 10));	// Before c++ 14, pair<char, int>('a', 10)
		map.insert(std::pair('b', 10));
		map.insert(std::pair('c', 10));
		map.insert(std::pair('a', 100));

		cout << map.count('a') << " ";

		for (const auto& i : map)
		{
			cout << i.first << " " << i.second << " ";
		}
		cout << endl;
	}
}

void ContainerAdapters()
{
	// stack
	{
		cout << "stack" << endl;

		std::stack<int> stack;
		stack.push(1);		// push adds a copy
		stack.emplace(2);	// emplace constructs a new object
		stack.emplace(3);
		cout << stack.top() << endl;
		stack.pop();
		cout << stack.top() << endl;
	}

	// queue
	{
		cout << "queue" << endl;

		std::queue<int> queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);
		cout << queue.front() << " " << queue.back() << endl;
		queue.pop();
		cout << queue.front() << " " << queue.back() << endl;
	}

	// priority_queue
	{
		cout << "priority_queue" << endl;

		std::priority_queue<int> priority_queue;
		for (const auto& i : { 1, 8, 5, 6, 3, 4, 0, 9, 7, 2 })
		{
			priority_queue.push(i);
		}

		for (size_t i = 0; i < 10; i++)
		{
			cout << priority_queue.top() << endl;
			priority_queue.pop();
		}
	}
}

int main()
{
	SequenceContainers();

	AssociativeContainers();

	ContainerAdapters();

	return 0;
}