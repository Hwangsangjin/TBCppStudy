#include <iostream>
#include <vector>

using namespace std;

struct Friend
{
public:	// access specifier(public, protected, private)
	string m_name;
	string m_address;
	int m_age;
	double m_height;
	double m_weight;

	const void Print() const
	{
		cout << m_name << " " << m_address << " " << m_age << " " << m_height << " " << m_weight << endl;
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