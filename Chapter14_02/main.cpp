#include <iostream>

using namespace std;

void Last()
{
	cout << "Last" << endl;
	cout << "Throws exception" << endl;

	throw 'a';

	cout << "End last" << endl;
}

void Third()
{
	cout << "Third" << endl;

	Last();

	cout << "End third" << endl;
}

void Second()
{
	cout << "Second" << endl;

	try
	{
		Third();
	}
	catch (double)
	{
		std::cerr << "Second caught int exception" << endl;
	}

	cout << "End second" << endl;
}

void First()
{
	cout << "First" << endl;

	try
	{
		Second();
	}
	catch (double)
	{
		std::cerr << "First caught double exception" << endl;
	}

	cout << "End first" << endl;
}

int main()
{
	cout << "Start" << endl;

	try
	{
		First();
	}
	catch (int)
	{
		std::cerr << "Main caught int exception" << endl;
	}
	catch (...)	// catch-all handlers
	{
		std::cerr << "Main caught ellipses exception" << endl;
	}

	cout << "End main" << endl;

	return 0;
}