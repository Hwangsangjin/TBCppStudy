#include <iostream>

using namespace std;

template<typename T, int size>
class StaticArray_Base
{
public:
	T* GetArray()
	{
		return m_array;
	}

	T& operator[](int index)
	{
		return m_array[index];
	}

	void Print()
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << (*this)[i] << " ";
		}
		cout << endl;
	}

private:
	T m_array[size];
};

template<typename T, int size>
class StaticArray : public StaticArray_Base<T, size>
{
};

template<int size>
class StaticArray<char, size> : public StaticArray_Base<char, size>
{
public:
	void Print()
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << (*this)[i];
		}
		cout << endl;
	}
};

int main()
{
	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	int4.Print();

	StaticArray<char, 14> char14;
	char14[0] = 'H';
	char14[1] = 'e';
	// ...
	strcpy_s(char14.GetArray(), 14, "Hello, World");
	//strcpy_s((char*)&char14[0], 14 * sizeof(char), "Hello, World");

	char14.Print();

	return 0;
}