#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

template<typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;

	osstream << x;
	return osstream.str();
}

template<typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str);
	return (isstream >> x) ? true : false;
}

int main()
{
	std::vector<char> vec;
	for (const auto& e : "Today is a good day.")
		vec.push_back(e);

	std::string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));

	std::cout << second_string << std::endl;

	std::string my_str(ToString("Hello"));

	double d;

	if (FromString(my_str, d))
		std::cout << d << std::endl;
	else
		std::cout << "Cannot convert string to double" << std::endl;

	std::cout << my_str << std::endl;

	return 0;
}