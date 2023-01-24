#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		/*std::string s;
		s.resize(-1);*/

		//throw std::runtime_error("Bad thing happend");
		throw CustomException();
	}
	catch (const std::length_error& e)
	{
		std::cout << "length_error" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << typeid(e).name() << std::endl;
		std::cerr << e.what() << std::endl;
	}

	return 0;
}