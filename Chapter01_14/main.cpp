#include <iostream>
#include <algorithm>

using namespace std;

// 매크로
#define MY_NUMBER	7
#define MY_STRING	"Hello, World"
#define MAX(a, b)	(((a) > (b)) ? (a) : (b))

#define LIKE_APPLE	// 해당 cpp 내에서만 적용

void DoSomething();

int main()
{
	cout << MY_NUMBER << endl;
	cout << MY_STRING << endl;
	cout << MAX(1 + 3, 2) << endl;
	cout << max(1 + 3, 2) << endl;

	DoSomething();

	return 0;
}