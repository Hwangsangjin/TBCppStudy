#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

mutex mtx;	// mutual exclusion

int main()
{
	auto WorkFunc = [](const string& name)
	{
		for (int i = 0; i < 5; i++)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));

			mtx.lock();
			cout << name << " " << std::this_thread::get_id() << " is working " << i << endl;
			mtx.unlock();
		}
	};

	std::thread t1 = std::thread(WorkFunc, "JackJack");
	std::thread t2 = std::thread(WorkFunc, "Dash");

	t1.join();
	t2.join();

	return 0;
}