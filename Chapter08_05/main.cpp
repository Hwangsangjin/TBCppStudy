#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student(const string& name)
		//: m_id(0)
		//, m_name(name)
		//: Student(0, name)
	{
		Init(0, name);
	}

	Student(const int& id, const string& name)
		//: m_id(id)
		//, m_name(name)
	{
		Init(id, name);
	}

	void Init(const int& id, const string& name)
	{
		m_id = id;
		m_name = name;
	}

	void Print()
	{
		cout << m_id << " " << m_name << endl;
	}

private:
	int m_id;
	string m_name;
};

int main()
{
	Student st1(0, "Jack Jack");
	st1.Print();

	Student st2("Dash");
	st2.Print();

	return 0;
}