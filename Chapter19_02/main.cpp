#include <iostream>
#include <tuple>

using namespace std;

auto MyFunc()
{
	return tuple(123, 456, 789, 10);
}

int main()
{
	auto [a, b, c, d] = MyFunc();
	cout << a << " " << b << " " << c << " " << d << endl;

	/*auto result = MyFunc();
	cout << std::get<0>(result) << " " << std::get<1>(result) << endl;*/

	return 0;
}