#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false;
	cout << bValue << endl;
	cout << sizeof(bValue) << endl;
	
	char chValue = 'A';
	cout << chValue << endl;
	cout << sizeof(chValue) << endl;

	float fValue = 3.141592f;
	cout << fValue << endl;
	cout << sizeof(fValue) << endl;

	double dValue = 3.141592;
	cout << dValue << endl;
	cout << sizeof(dValue) << endl;

	return 0;
}