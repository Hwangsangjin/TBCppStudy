#include <iostream>

void DoSomething()
{
	using namespace std;

	// ��ó����
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif
}