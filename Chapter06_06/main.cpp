#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[50];

	strcpy_s(dest, 50, source);

	cout << source << endl;
	cout << dest << endl;

	strcat_s(dest, 50, source);

	cout << source << endl;
	cout << dest << endl;

	if (strcmp(source, dest) == 0)
	{
		cout << source << "와 " << dest << "는 같다." << endl;
	}
	else
	{
		cout << source << "와 " << dest << "는 다르다." << endl;
	}

	return 0;
}