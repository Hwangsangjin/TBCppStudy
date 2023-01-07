#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void PrintColorName(Colors color)
{
	switch (color)
	{
	case Colors::BLACK:
		cout << "Black" << endl;
		break;
	case Colors::WHITE:
		cout << "White" << endl;
		break;
	case Colors::RED:
		cout << "Red" << endl;
		break;
	case Colors::GREEN:
		cout << "Green" << endl;
		break;
	case Colors::BLUE:
		cout << "Blue" << endl;
		break;
	default:
		cout << "Undefined color" << endl;
		break;
	}
}

int main()
{
	PrintColorName(Colors::BLACK);

	return 0;
}