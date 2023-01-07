#include <iostream>
#include <string>

using namespace std;

struct Person
{
	string name;
	int age;
	double height;
	float weight;

	void Print()
	{
		cout << name << " " << age << " " << height << " " << weight << endl;
	}
};

/*void Print(Person ps)
{
	cout << ps.name << " " << ps.age << " " << ps.height << " " << ps.weight << endl;
}
*/

Person GetMe()
{
	Person me{ "Jack Jack", 20, 100.0f, 10.0 };

	return me;
}

struct Family
{
	Person me, mom, dad;
};

struct Employee		// 2 + (2) + 4 + 8 = 16 // padding
{
	short id;		// 2 bytes
	int age;		// 4 bytes
	double wage;	// 8 bytes
};

int main()
{
	Person me{ "Jack Jack", 20, 100.0f, 10.0 };
	/*me.name = "Jack Jack";
	me.age = 20;
	me.height = 100.0f;
	me.weight = 10.0;*/
	//Print(me);
	me.Print();

	Person meFromFunc = GetMe();
	meFromFunc.Print();

	Employee emp;
	cout << sizeof(emp) << endl;

	return 0;
}