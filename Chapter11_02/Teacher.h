#pragma once

#include "Person.h"

class Teacher : public Person
{
public:
	Teacher(const std::string& name = "No name")
		: Person(name)
	{}

	void Teach()
	{
		std::cout << GetName() << " is teaching" << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& out, const Teacher& teacher)
	{
		out << teacher.GetName();
		return out;
	}
};