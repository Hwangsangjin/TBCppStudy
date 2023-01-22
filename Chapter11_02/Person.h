#pragma once

#include <iostream>
#include <string>

class Person
{
public:
	/*Person()
		: m_name("No name")
	{}*/

	Person(const std::string& name = "No name")
		: m_name(name)
	{}

	const std::string GetName() const
	{
		return m_name;
	}

	void SetName(const std::string& name)
	{
		m_name = name;
	}

	void DoNothing() const
	{
		std::cout << m_name << " is do nothing" << std::endl;
	}

private:
	std::string m_name;
};