#include <iostream>

using namespace std;

int main()
{
	cout << "While-loop test" << endl;

	int outerCount = 1;
	while (outerCount <= 5)
	{
		int innerCount = 1;
		while (innerCount <= outerCount)
		{
			cout << innerCount++ << " ";
		}
		cout << endl;

		++outerCount;
	}

	return 0;
}