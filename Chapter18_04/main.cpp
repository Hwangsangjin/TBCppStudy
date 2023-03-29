#include <iostream>
#include <cctype>
#include <string>
#include <bitset>

using namespace std;

void PrintStates(const std::ios& stream)
{
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;
	cout << "fail()=" << stream.fail() << endl;
	cout << "bad()=" << stream.bad() << endl;
}

void ClassifyCharacters(const string& str)
{
	for (const auto& e : str)
	{
		cout << e << endl;
		cout << "isdigit " << std::isdigit(e) << endl;
		cout << "isblank " << std::isblank(e) << endl;
		cout << "isalpha " << std::isalpha(e) << endl;
	}
}

void PrintCharacterClassification(const int& i)
{
	cout << boolalpha;
	cout << "isalnum" << bool(std::isalnum(i)) << endl;
	cout << "isblank" << bool(std::isblank(i)) << endl;
	cout << "isdigit" << bool(std::isdigit(i)) << endl;
	cout << "islower" << bool(std::islower(i)) << endl;
	cout << "isupper" << bool(std::isupper(i)) << endl;
}

int main()
{
	//while (true)
	//{
	//	int i;
	//	cin >> i;

	//	PrintStates(cin);

	//	cout << i << endl;

	//	//cout << boolalpha;
	//	//cout << std::bitset<8>(cin.rdstate()) << endl;
	//	//cout << std::bitset<8>(std::istream::goodbit) << endl;
	//	//cout << std::bitset<8>(std::istream::failbit) << endl;
	//	//cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;

	//	//PrintCharacterClassification(i);

	//	//cin.clear();
	//	//cin.ignore(1024, '\n');
	//	//cout << endl;
	//}

	ClassifyCharacters("1234");
	ClassifyCharacters("a 1234");

	return 0;
}