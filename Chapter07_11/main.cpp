#include <iostream>
#include <vector>

using namespace std;

void PrintStack(const std::vector<int>& stack)
{
	for (const auto& i : stack)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	std::vector<int> stack;

	//stack.reserve(1024);

	stack.push_back(3);
	PrintStack(stack);
	
	stack.push_back(5);
	PrintStack(stack);

	stack.push_back(7);
	PrintStack(stack);

	stack.pop_back();
	PrintStack(stack);

	stack.pop_back();
	PrintStack(stack);

	stack.pop_back();
	PrintStack(stack);

	return 0;
}