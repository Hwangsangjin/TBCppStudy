#include <iostream>
#include "MyConstants.h"

extern int a = 123;

void DoSomething()
{
	using namespace std;

	cout << "In test.cpp " << Constants::PI << " " << &Constants::PI << endl;
}