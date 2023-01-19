#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Point
{
public:
	Point(double x = 0.0, double y = 0.0f, double z = 0.0)
		: m_x(x)
		, m_y(y)
		, m_z(z)
	{}

	double GetX()
	{
		return m_x;
	}

	double GetY()
	{
		return m_y;
	}

	double GetZ()
	{
		return m_z;
	}

	/*void Print()
	{
		cout << m_x << " " << m_y << " " << m_z << endl;
	}*/

	friend std::ostream& operator<<(std::ostream& out, const Point& point)
	{
		out << "(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";

		return out;
	}

	friend std::istream& operator>>(std::istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;

		return in;
	}

private:
	double m_x;
	double m_y;
	double m_z;
};

int main()
{
	std::string s;
	std::ifstream in("in.txt");
	//std::ofstream out("out.txt");

	//Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
	//Point p1, p2;

	//cin >> p1 >> p2;

	/*p1.Print();
	p2.Print();*/

	//cout << p1 << " " << p2 << endl;

	in.seekg(0, std::ios::end);
	int size = in.tellg();
	s.resize(size);
	in.seekg(0, std::ios::beg);
	in.read(&s[0], size);

	cout << s << endl;
	//out << p1 << " " << p2 << endl;

	in.close();
	//out.close();

	return 0;
}