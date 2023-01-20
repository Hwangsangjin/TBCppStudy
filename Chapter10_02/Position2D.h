#pragma once

#include <iostream>

class Position2D
{
public:
	Position2D(const int& x, const int& y)
		: m_x(x)
		, m_y(y)
	{}

	void Set(const Position2D& pos)
	{
		Set(pos.m_x, pos.m_y);
	}

	void Set(const int& x, const int& y)
	{
		m_x = x;
		m_y = y;
	}

	friend std::ostream& operator<<(std::ostream& out, const Position2D& pos)
	{
		out << pos.m_x << " " << pos.m_y;
		return out;
	}

private:
	int m_x;
	int m_y;
};