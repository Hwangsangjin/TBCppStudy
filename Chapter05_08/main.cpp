#include <iostream>

using namespace std;

void BreakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
		{
			break;
		}

		if (ch == 'r')
		{
			return;
		}
	}

	cout << "Hello" << endl;
}

int main()
{
	BreakOrReturn();

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}

		cout << i << endl;
	}

	int count(0);
	do
	{
		if (count == 5)
		{
			continue;
		}
		
		cout << count << endl;
	} while (++count < 10);

	return 0;
}