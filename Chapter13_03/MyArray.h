#pragma once

#include <iostream>
#include <cassert>

template<typename T, unsigned int T_SIZE>
class MyArray
{
public:
	MyArray()
	{
		m_data = new T[T_SIZE];
	}

	~MyArray()
	{
		Reset();
	}

	void Reset()
	{
		delete[] m_data;
		m_data = nullptr;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int GetLength()
	{
		return T_SIZE;
	}

	void Print()
	{
		for (size_t i = 0; i < T_SIZE; i++)
		{
			std::cout << m_data[i] << " ";
		}
		std::cout << std::endl;
	}

private:
	T* m_data;
};