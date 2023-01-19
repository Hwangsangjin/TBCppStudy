#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (size_t i = 0; i < m_length; i++)
		{
			m_data[i] = source[i];
		}

		m_data[m_length - 1] = '\0';
	}

	//MyString(const MyString& source) = delete;
	MyString(const MyString& source)
	{
		cout << "Copy constructor" << endl;

		Initialize(source);
	}

	MyString& operator=(const MyString& source)
	{
		cout << "Assignment operator" << endl;

		if (this == &source)	// prevent self-assignment
		{
			return *this;
		}

		delete[] m_data;

		Initialize(source);

		return *this;
	}

	void Initialize(const MyString& source)
	{
		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];
			for (size_t i = 0; i < m_length; i++)
			{
				m_data[i] = source.m_data[i];
			}
		}
		else
		{
			m_data = nullptr;
		}
	}

	char* GetString() { return m_data; }
	int GetLength() { return m_length; }

	~MyString()
	{
		delete[] m_data;
	}

//private:
	int m_length = 0;
	char* m_data = nullptr;
};

int main()
{
	MyString hello("Hello");

	cout << (int*)hello.m_data << endl;
	cout << hello.GetString() << endl;

	{
		MyString copy = hello;

		cout << (int*)copy.m_data << endl;
		cout << copy.GetString() << endl;
	}

	cout << hello.GetString() << endl;

	MyString str1(hello);	// MyString str1 = hello;
	MyString str2;
	str2 = hello;

	return 0;
}