#include <iostream>
#include "Calc.h"

int main()
{
	Calc cal(10);
	cal.Add(10).Sub(1).Mul(2).Print();
	Calc(10).Add(10).Sub(1).Mul(2).Print();
	/*cal.Add(10);
	cal.Sub(1);
	cal.Mul(2);
	cal.Print();*/

	return 0;
}