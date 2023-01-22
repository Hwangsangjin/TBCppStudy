#include <iostream>

using namespace std;

class USBDevice
{
public:
	USBDevice(int id)
		: m_id(id)
	{}

	int GetID()
	{
		return m_id;
	}

	void PlugAndPlay() {}

private:
	int m_id;
};

class NetworkDevice
{
public:
	NetworkDevice(int id)
		: m_id(id)
	{}

	int GetID()
	{
		return m_id;
	}

	void Networking() {}

private:
	int m_id;

};

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(int usb_id, int net_id)
		: USBDevice(usb_id)
		, NetworkDevice(net_id)
	{}

	/*USBNetworkDevice(int id)
		: USBDevice(id)
		, NetworkDevice(id)
	{}*/
};

int main()
{
	USBNetworkDevice my_device(1, 2);

	my_device.Networking();
	my_device.PlugAndPlay();

	my_device.USBDevice::GetID();
	my_device.NetworkDevice::GetID();

	return 0;
}