#pragma once

#include "Person.h"

class Student : public Person
{
public:
	Student(const std::string& name = "No name", const int& intelligence = 0)
		: Person(name)
		, m_intelligence(intelligence)
	{}

	int GetIntelligence()
	{
		return m_intelligence;
	}

	void SetIntelligence(const int& intelligence)
	{
		m_intelligence = intelligence;
	}

	void Study()
	{
		std::cout << GetName() << " is studying" << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& out, const Student& student)
	{
		out << student.GetName() << " " << student.m_intelligence;
		return out;
	}

private:
	int m_intelligence;
};
