#include <iostream>

using namespace std;

class PoweredDevice
{
public:
	PoweredDevice(int power)
	{
		cout << "PoweredDevice: " << power << endl;
	}

	int m_i = 0;
};

class Scanner : virtual public PoweredDevice
{
public:
	Scanner(int scanner, int power)
		: PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << endl;
	}
};

class Printer : virtual public PoweredDevice
{
public:
	Printer(int printer, int power)
		: PoweredDevice(power)
	{
		cout << "Printer: " << printer << endl;
	}
};

class Copier : public Scanner, public Printer
{
public:
	Copier(int scanner, int printer, int power)
		: Scanner(scanner, power)
		, Printer(printer, power)
		, PoweredDevice(power)
	{}
};

int main()
{
	Copier copier(1, 2, 3);

	cout << &copier.Scanner::PoweredDevice::m_i << endl;
	cout << &copier.Printer::PoweredDevice::m_i << endl;

	return 0;
}