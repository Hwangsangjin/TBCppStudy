#pragma once

template <typename T>
class Storage8
{
public:
	const T& Get(int index)
	{
		return m_array[index];
	}

	void Set(int index, const T& value)
	{
		m_array[index] = value;
	}

private:
	T m_array[8];
};

template<>
class Storage8<bool>
{
public:
	Storage8()
		: m_data(0)
	{}

	bool Get(int index)
	{
		unsigned char mask = 1 << index;
		return (m_data & mask) != 0;
	}

	void Set(int index, bool value)
	{
		unsigned char mask = 1 << index;

		if (value)
		{
			m_data |= mask;
		}
		else
		{
			m_data &= ~mask;
		}
	}

private:
	unsigned char m_data;
};