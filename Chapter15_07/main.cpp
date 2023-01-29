#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Person
{
public:
	Person(const std::string& name)
		: m_name(name)
	{
		cout << m_name << " created" << endl;
	}

	~Person()
	{
		cout << m_name << " destroyed" << endl;
	}

	friend bool PartnerUp(std::shared_ptr<Person>& p1, std::shared_ptr<Person>& p2)
	{
		if (!p1 || !p2)
		{
			return false;
		}

		p1->m_partner = p2;
		p2->m_partner = p1;

		cout << p1->m_name << " is partnered with " << p2->m_name << endl;

		return true;
	}

	const std::shared_ptr<Person> GetPartner() const
	{
		return m_partner.lock();
	}

	const std::string& GetName() const
	{
		return m_name;
	}

private:
	std::string m_name;
	//std::shared_ptr<Person> m_partner;
	std::weak_ptr<Person> m_partner;
};

int main()
{
	auto lucy = std::make_shared<Person>("Lucy");
	auto ricky = std::make_shared<Person>("Ricky");

	PartnerUp(lucy, ricky);

	cout << lucy->GetPartner()->GetName() << endl;

	return 0;
}