#include <iostream>

using namespace std;

enum class Color
{
	RED,
	BLUE
};

enum class Fruit
{
	BANANA,
	APPLE
};

int main()
{
	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	/*if (color == fruit)
	{
		cout << "Color is fruit ?" << endl;
	}*/

	Color color1 = Color::BLUE;
	Color color2 = Color::BLUE;

	if (color1 == color2)
	{
		cout << "Same color" << endl;
	}

	return 0;
}