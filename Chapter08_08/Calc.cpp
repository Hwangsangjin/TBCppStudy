#include "Calc.h"

Calc::Calc(int value)
	: m_value(value)
{
}

Calc& Calc::Add(int value)
{ 
	m_value += value;
	return *this;
}

Calc& Calc::Sub(int value)
{
	m_value -= value;
	return *this;
}

Calc& Calc::Mul(int value)
{
	m_value *= value;
	return *this;
}

void Calc::Print()
{
	std::cout << m_value << std::endl;
}