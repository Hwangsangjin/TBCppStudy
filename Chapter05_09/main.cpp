#include <iostream>
#include <cstdlib>	// std::rand(), std::srand()
#include <ctime>	// std::time()
#include <random>	// C++11 random create 

using namespace std;

int main()
{
	/*std::srand(static_cast<unsigned int>(std::time(0)));

	for (size_t i = 1; i <= 20; i++)
	{
		cout << std::rand() << "\t";

		if (i % 5 == 0)
		{
			cout << endl;
		}
	}*/

	std::random_device rd;
	std::mt19937 mersenne(rd());	// create a mersenne twister
	std::uniform_int_distribution<> dice(1, 6);

	for (size_t i = 1; i <= 20; i++)
	{
		cout << dice(mersenne) << "\t";

		if (i % 5 == 0)
		{
			cout << endl;
		}
	}

	return 0;
}