#include <iostream>

using namespace std;

// ¿­°ÅÇü
enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN
};

int main()
{
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	cout << paint << endl;
	cout << house << endl;
	cout << apple << endl;

	return 0;
}