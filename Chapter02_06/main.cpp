#include <iostream>

bool IsEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	using namespace std;

	bool b1 = true;		// copy initialization
	bool b2(false);		// direct initialization
	bool b3{ true };	// uniform initialization

	cout << std::boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	cout << std::noboolalpha;
	cout << true << endl;
	cout << false << endl;
	cout << !true << endl;
	cout << !false << endl;

	if (true)
	{
		cout << "This is true" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}

	cout << std::boolalpha;
	cout << IsEqual(1, 1) << endl;
	cout << IsEqual(0, 3) << endl;

	return 0;
}