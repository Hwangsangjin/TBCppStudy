#pragma once

#include <iostream>

class Calc
{
public:
	Calc(int value);

	Calc& Add(int value);
	Calc& Sub(int value);
	Calc& Mul(int value);

	void Print();

private:
	int m_value;
};