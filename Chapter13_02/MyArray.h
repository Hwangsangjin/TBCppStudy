#pragma once

#include <iostream>
#include <cassert>

template<typename T>
class MyArray
{
public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length)
	{
		m_length = length;
		m_data = new T[length];
	}

	~MyArray()
	{
		Reset();
	}

	void Reset()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int GetLength()
	{
		return m_length;
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
	int m_length;
	T* m_data;
};