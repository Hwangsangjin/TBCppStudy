#include <iostream>
#include "MyConstants.h"

using namespace std;

/*
	int g_x;		// external linkage
	static int g_x;	// internal linkage
	const int g_x;	// X

	extern int g_y;
	extern const int g_y;

	int g_z(1);
	static int g_z(1);
	const int g_z(1);

	extern int g_w(1);
	extern const int g_w(1);
*/

// 전방 선언
extern int a;
extern void DoSomething();

int main()
{
	cout << a << endl;

	DoSomething();

	cout << "In main.cpp " << Constants::PI << " " << &Constants::PI << endl;

	return 0;
}