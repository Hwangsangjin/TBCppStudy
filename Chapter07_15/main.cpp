#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	for (size_t i = 0; i < argc; i++)
	{
		std::string argv_single = argv[i];

		if (i == 1)
		{
			int input_number = std::stoi(argv_single);
			cout << input_number + 1 << endl;
		}
		else
		{
			cout << argv_single << endl;
		}
	}

	return 0;
}