#include <iostream>
#include <regex>

using namespace std;

int main()
{
	//regex re("\\d+");
	//regex re("[ab]");
	//regex re("[[:digit:]]{3}");
	//regex re("[A-Z]+");
	//regex re("[A-Z]{3}");
	regex re("([0-9]{1})([-]?)([0-9]{1,4})");

	string str;

	while (true)
	{
		getline(cin, str);

		if (std::regex_match(str, re))
		{
			cout << "match" << endl;
		}
		else
		{
			cout << "No match" << endl;
		}

		// print matches
		{
			auto begin = std::sregex_iterator(str.begin(), str.end(), re);
			auto end = std::sregex_iterator();
			for (auto iter = begin; iter != end; ++iter)
			{
				std::smatch match = *iter;
				cout << match.str() << " ";
			}
			cout << endl;
		}

		cout << endl;
	}

	return 0;
}