#pragma once

#include <string>

class Teacher
{
public:
	Teacher(const std::string& name)
	{
		m_name = name;
	}

	std::string GetName()
	{
		return m_name;
	}

	void SetName(const std::string& name)
	{
		m_name = name;
	}

	friend std::ostream& operator<<(std::ostream& out, const Teacher& teacher)
	{
		out << teacher.m_name;
		return out;
	}

private:
	std::string m_name;
};