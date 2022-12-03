#include <iostream>

void DoSomething()
{
	using namespace std;

	// 전처리기
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif
}