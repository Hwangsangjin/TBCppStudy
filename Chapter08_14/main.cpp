#include <iostream>

using namespace std;

class Fruit
{
public:
	enum class FruitType
	{
		APPLE,
		BANANA,
		CHERRY
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{

	};

	Fruit(FruitType type)
		: m_type(type)
	{}

	FruitType GetType()
	{
		return m_type;
	}

private:
	FruitType m_type;
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.GetType() == Fruit::FruitType::APPLE)
	{
		cout << "Apple" << endl;
	}

	return 0;
}