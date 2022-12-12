#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 1 << 4;
	const unsigned char opt5 = 1 << 5;
	const unsigned char opt6 = 1 << 6;
	const unsigned char opt7 = 1 << 7;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;
	cout << bitset<8>(opt4) << endl;
	cout << bitset<8>(opt5) << endl;
	cout << bitset<8>(opt6) << endl;
	cout << bitset<8>(opt7) << endl;

	unsigned char items_flag = 0;

	// no item
	cout << "No item " << bitset<8>(items_flag) << endl;

	// item0 on
	items_flag |= opt0;
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	// item0 lost
	items_flag &= ~opt0;
	cout << "Item0 lost " << bitset<8>(items_flag) << endl;

	// has item0 ?
	if (items_flag & opt1)
	{
		cout << "Has item0 " << bitset<8>(items_flag) << endl;
	}
	else
	{
		cout << "Not have item0 " << bitset<8>(items_flag) << endl;
	}

	// obtain item1, 2
	items_flag |= (opt1 | opt2);
	cout << "Item1, 2 obtained " << bitset<8>(opt1 | opt2) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2;
		items_flag ^= opt1;
	}

	cout << "Item1, 2 obtained " << bitset<8>(items_flag) << endl;

	return 0;
}