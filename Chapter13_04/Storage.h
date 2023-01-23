#pragma once

#include <iostream>

template <typename T>
class Storage
{
public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{}

	void Print()
	{
		std::cout << m_value << std::endl;
	}

private:
	T m_value;
};

template<>
void Storage<double>::Print()
{
	std::cout << "double type " << std::scientific << m_value << std::endl;
}