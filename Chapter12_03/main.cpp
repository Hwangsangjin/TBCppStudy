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
	virtual void Print() override { cout << "B" << endl; }
};

class C : public B
{
public:
	virtual void Print() final { cout << "C" << endl; }
};

class D
{
public:
	void Print() { cout << "D" << endl; }

	virtual D* GetThis() { cout << "D::GetThis()" << endl; return this; }
};

class E : public D
{
public:
	void Print() { cout << "E" << endl; }
	virtual E* GetThis() { cout << "E::GetThis()" << endl; return this; }
};

int main()
{
	A a;
	B b;
	C c;

	A& ref1 = c;
	ref1.Print();

	D d;
	E e;

	D& ref2 = e;
	e.GetThis()->Print();
	ref2.GetThis()->Print();

	cout << typeid(e.GetThis()).name() << endl;
	cout << typeid(ref2.GetThis()).name() << endl;

	return 0;
}