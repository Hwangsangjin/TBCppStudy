#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
public:
	Monster(const std::string name, const Position2D pos)
		: m_name(name)
		, m_location(pos)
	{}

	void MoveTo(const Position2D& pos)
	{
		m_location.Set(pos);
	}

	friend std::ostream& operator<<(std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
	
private:
	std::string m_name;
	Position2D m_location;
	//int m_x, m_y;	// location
};