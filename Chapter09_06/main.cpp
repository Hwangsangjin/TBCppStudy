#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
public:
	/*void SetItem(int index, int value)
	{
		m_list[index] = value;
	}

	int GetItem(int index)
	{
		return m_list[index];
	}

	int* GetList()
	{
		return m_list;
	}*/

	int& operator[](const int index)
	{ 
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}

	const int& operator[](const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}

private:
	int m_list[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
};

int main()
{
	IntList my_list;

	/*my_list.SetItem(3, 1);
	cout << my_list.GetItem(3) << endl;
	my_list.GetList()[3] = 10;
	cout << my_list.GetList()[3] << endl;*/

	my_list[3] = 10;
	cout << my_list[3] << endl;

	const IntList my_list2;
	cout << my_list2[3] << endl;

	return 0;
}