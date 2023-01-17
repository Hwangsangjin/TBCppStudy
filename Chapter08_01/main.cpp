#include <iostream>
#include <vector>

using namespace std;

struct Friend
{
public:	// access specifier(public, protected, private)
	string _name;
	string _address;
	int _age;
	double _height;
	double _weight;

	const void Print() const
	{
		cout << _name << " " << _address << " " << _age << " " << _height << " " << _weight << endl;
	}
};

int main()
{
	Friend jj{ "Jack Jack", "Uptown", 20, 30, 40 };	// instanciation, instance

	jj.Print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (const auto& i : my_friends)
	{
		i.Print();
	}

	return 0;
}