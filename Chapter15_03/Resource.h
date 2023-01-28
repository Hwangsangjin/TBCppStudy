#pragma once

#include <iostream>

template <typename T>
class Resource
{
public:
	Resource()
	{
		std::cout << "Resource default constructed" << std::endl;
	}

	Resource(unsigned int length)
	{
		std::cout << "Resource length constructed" << std::endl;

		m_data = new T[length];
		m_length = length;
	}

	Resource(const Resource& res)
	{
		std::cout << "Resource copy constructed" << std::endl;

		Resource(res.m_length);

		for (size_t i = 0; i < m_length; i++)
		{
			m_data[i] = res.m_data[i];
		}
	}

	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;

		if (m_data != nullptr)
		{
			delete[] m_data;
			m_data = nullptr;
		}
	}

	Resource& operator=(const Resource& res)
	{
		std::cout << "Resource copy assignment" << std::endl;

		if (&res == this)
		{
			return *this;
		}

		if (this->m_data != nullptr)
		{
			delete[] m_data;
			m_data = nullptr;
		}

		m_length = res.m_length;
		m_data = new T[m_length];

		for (size_t i = 0; i < m_length; i++)
		{
			m_data[i] = res.m_data[i];
		}

		return *this;
	}

	void Print()
	{
		for (size_t i = 0; i < m_length; i++)
		{
			std::cout << m_data[i] << " ";
		}
		std::cout << std::endl;
	}

private:
	T* m_data = nullptr;
	unsigned int m_length = 0;
};
