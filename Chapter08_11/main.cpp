#include <iostream>

using namespace std;

class Something
{
public:
	class _init
	{
	public:
		_init()
		{
			s_value = 1024;
		}
	};

	static int GetValue()
	{
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}

private:
	static int s_value;
	static _init s_initializer;
};

int Something::s_value;
Something::_init Something::s_initializer;

int main()
{
	cout << Something::GetValue() << endl;

	Something s1, s2;
	cout << s1.GetValue() << endl;

	int(Something::*fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	int(*fptr2)() = &Something::GetValue;

	cout << fptr2() << endl;

	return 0;
}