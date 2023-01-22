#include <iostream>

using namespace std;

class A
{
public:
	virtual void Print() { cout << "A" << endl; }
};

class B : public A
{
public:
	virtual void Print() { cout << "B" << endl; }
};

class C : public B
{
public:
	virtual void Print() { cout << "C" << endl; }
};

class D : public C
{
public:
	virtual void Print() { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;
	D d;

	A& ref = d;
	ref.Print();

	return 0;
}