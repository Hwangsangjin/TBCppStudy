#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

class Cents
{
public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int GetCents() const
	{
		return m_cents;
	}

	int& GetCents()
	{
		return m_cents;
	}

	friend bool operator==(const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator<(const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

private:
	int m_cents;
};

int main()
{
	Cents cents1(6);
	Cents cents2(6);

	if (cents1 == cents2)
	{
		cout << "Equal" << endl;
	}

	std::vector<Cents> arr(20);
	for (size_t i = 0; i < arr.size(); i++)
	{
		arr[i].GetCents() = i;
	}

	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(begin(arr), end(arr), g);

	for (const auto& i : arr)
	{
		cout << i << " ";
	}
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (const auto& i : arr)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}