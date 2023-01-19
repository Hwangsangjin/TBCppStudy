#include <iostream>

using namespace std;

class Accumulator
{
public:
	int operator()(int i)
	{
		return m_count += i;
	}

private:
	int m_count = 0;
};

int main()
{
	Accumulator acc;
	cout << acc(10) << endl;
	cout << acc(20) << endl;

	return 0;
}