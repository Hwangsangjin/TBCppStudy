#include <iostream>
#include <array>
#include <tuple>

using namespace std;

struct MyStruct
{
	int a, b;
};

MyStruct GetStruct()
{
	MyStruct my_struct{ 1, 2 };
	return my_struct;
}

int* GetPtrValue(int x)
{
	int value = x * 2;
	return &value;
}

int& GetRefValue(int x)
{
	int value = x * 2;
	return value;
}

int& GetArrayValue(std::array<int, 100>& my_array, int index)
{
	return my_array[index];
}

std::tuple<int, double> GetTuple()
{
	int a = 10;
	double d = 3.14;

	return std::make_tuple(a, d);
}

int main()
{
	int* ptr_value = GetPtrValue(3);
	cout << *ptr_value << endl;

	int ref_value = GetRefValue(3);
	cout << ref_value << endl;

	std::array<int, 100> my_array;
	GetArrayValue(my_array, 30) = 1024;
	cout << my_array[30] << endl;

	MyStruct my_struct = GetStruct();
	cout << my_struct.a << " " << my_struct.b << endl;

	std::tuple<int, double> my_tuple = GetTuple();
	//auto [a, d] = GetTuple();	// C++17
	cout << std::get<0>(my_tuple) << endl;	// a
	cout << std::get<1>(my_tuple) << endl;	// d

	return 0;
}