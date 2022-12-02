#include <iostream>

using namespace std;

void PrintHelloWorld()
{
	cout << "Hello World" << endl;
}

int AddTwoNumbers(int numA, int numB)
{
	int sum = numA + numB;

	return sum;
}

int main()
{
	PrintHelloWorld();

	int sum = AddTwoNumbers(1, 2);

	return 0;
}