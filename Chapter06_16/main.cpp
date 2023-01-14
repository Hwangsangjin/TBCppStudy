#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;
	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 10;
	ref.weight = 40;

	Person* ptr = &person;
	ptr->age = 15;
	ptr->weight = 50;

	return 0;
}