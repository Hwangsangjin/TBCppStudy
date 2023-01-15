#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::string hello = "Hello, my name is Jack Jack";

	cout << "Input form 0 to " << hello.size() - 1 << endl;

	while (true)
	{
		int index;
		cin >> index;

		if (index >= 0 && index <= hello.size() - 1)
		{
			cout << hello[index] << endl;
		}
		else
		{
			cout << "Please try again" << endl;
		}
	}

	return 0;
}