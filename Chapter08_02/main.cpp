#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
public:	// access specifier
	void SetDate(const int& month, const int& day, const int& year)
	{
		m_month = month;
		m_day = day;
		m_year = year;
	}

	void SetMonth(const int& month)
	{
		m_month = month;
	}

	const int& GetDay()
	{
		return m_day;
	}

	void CopyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}

private:	
	int m_month;
	int m_day;
	int m_year;
};

int main()
{
	Date today;	// { 8, 4, 2025 };
	/*today.m_month = 8;
	today.m_day = 4;
	today.m_year = 2025;*/
	today.SetDate(8, 4, 2025);
	today.SetMonth(10);

	Date copy;
	copy.CopyFrom(today);

	return 0;
}