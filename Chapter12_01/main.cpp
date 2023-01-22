#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal(string name)
		: m_name(name)
	{}

	string GetName()
	{
		return m_name;
	}

	virtual void Speak() const
	{
		cout << m_name << " ???" << endl;
	}

protected:
	string m_name;
};

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	string GetName()
	{
		return m_name;
	}

	void Speak() const
	{
		cout << m_name << " Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	string GetName()
	{
		return m_name;
	}

	void Speak() const
	{
		cout << m_name << " Woof" << endl;
	}
};

int main()
{
	Cat cats[] = { Cat("cat1"), Cat("cat2") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	Animal* my_animals[] = { &cats[0], &cats[1], &dogs[0], &dogs[1] };
	
	for (const auto& i : my_animals)
	{
		i->Speak();
	}

	return 0;
}