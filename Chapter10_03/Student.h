#pragma once

#include <iostream>
#include <string>

class Student
{
public:
	Student(const std::string& name = "No name", const int& intelligence = 0)
		: m_name(name)
		, m_intelligence(intelligence)
	{}

	std::string GetName()
	{
		return m_name;
	}

	void SetName(const std::string& name)
	{
		m_name = name;
	}

	int GetIntelligence()
	{
		return m_intelligence;
	}

	void SetIntelligence(const int& intelligence)
	{
		m_intelligence = intelligence;
	}

	friend std::ostream& operator<<(std::ostream& out, const Student& student)
	{
		out << student.m_name << " "<< student.m_intelligence;
		return out;
	}

private:
	std::string m_name;
	int m_intelligence;
};
