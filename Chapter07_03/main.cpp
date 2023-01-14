#include <iostream>

using namespace std;

void AddOne(int& y)
{
	cout << y << " " << &y << endl;

	y += 1;
}

void GetSinCos(const double& degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592 / 180.0;
	const double radians = degrees * pi;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	int x = 5;

	cout << x << " " << &x << endl;

	AddOne(x);

	cout << x << " " << &x << endl;

	double sin(0.0);
	double cos(0.0);

	GetSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	return 0;
}