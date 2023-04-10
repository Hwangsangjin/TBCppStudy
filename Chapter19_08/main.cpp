#include <iostream>
#include <vector>
#include <algorithm>	// std::min

using namespace std;

class Examples
{
public:
	void Ex1()
	{
		std::vector<int> vec;
		for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		{
			cout << *iter;
		}

		for (auto iter = vec.begin(); iter != vec.end(); iter++)
		{
			cout << *iter;
		}

		for (const auto& iter : vec)
		{
			cout << iter;
		}
	}

	void Ex2()
	{
		int x = int();

		auto auto_x = x;

		const int& crx = x;

		auto auto_crx1 = crx;

		const auto& auto_crx2 = crx;

		volatile int vx = 1024;

		auto avx = vx;

		volatile auto vavx = vx;
	}

	/*template<typename T>
	void FuncEx3(T arg)
	{}*/

	template<typename T>
	void FuncEx3(const T& arg)
	{}

	void Ex3()
	{
		const int& crx = 123;

		FuncEx3(crx);
	}

	void Ex4()
	{
		const int c = 0;
		auto& rc = c;
		//rc = 123;	// error
	}

	void Ex5()
	{
		int i = 42;
		auto&& ri_1 = i;	// l-value
		auto&& ri_2 = 42;	// r-value
	}

	void Ex6()
	{
		int x = 42;
		const int* p1 = &x;
		auto p2 = p1;
		//*p2 = 43;	// error
	}

	template<typename T, typename S>
	void FuncEx7(T lhs, S rhs)
	{
		auto prod1 = lhs * rhs;

		//typedef typeof(lhs * rhs) product_type;	// pre-c++11 'some' compilers
		typedef decltype(lhs * rhs) product_type;

		product_type prod2 = lhs * rhs;

		decltype(lhs * rhs) prod3 = lhs * rhs;
	}

	template<typename T, typename S>
	//decltype(lhs * rhs) FuncEx8(T lhs, S rhs)
	auto FuncEx8(T lhs, S rhs) -> decltype(lhs * rhs)
	{
		return lhs * rhs;
	}

	void Ex7_8()
	{
		FuncEx7(1.0, 345);
		FuncEx8(1.2, 345);
	}

	struct S
	{
		int m_x;

		S()
		{
			m_x = 42;
		}
	};

	void Ex9()
	{
		int x;
		const int cx = 42;
		const int& crx = x;
		const S* p = new S();

		auto a = x;
		auto b = cx;
		auto c = crx;
		auto d = p;
		auto e = p->m_x;

		typedef decltype(x)		 x_type;
		typedef decltype(cx)	 cx_type;
		typedef decltype(crx)	 crx_type;
		typedef decltype(p->m_x) m_x_type;	// 'declared' type

		typedef decltype((x)) x_with_parens_type;	// add references to lvalues
		typedef decltype((cx)) cx_with_parens_type;
		typedef decltype((crx)) crx_with_parens_type;
		typedef decltype((p->m_x)) m_x_with_parens_type;
	}

	const S Foo()
	{
		return S();
	}

	const int& Foobar()
	{
		return 123;
	}

	void Ex10()
	{
		vector<int> vec = { 42, 43 };

		auto a = Foo();
		typedef decltype(Foo()) foo_type;

		auto b = Foo();
		typedef decltype(Foobar()) foobar_type;

		auto iter = vec.begin();
		typedef decltype(vec.begin()) iterator_type;

		auto first_element = vec[0];
		decltype(vec[1]) second_element = vec[1];
	}

	void Ex11()
	{
		int x = 0;
		int y = 0;
		const int cx = 42;
		const int cy = 43;
		double d1 = 3.14;
		double d2 = 2.72;

		typedef decltype(x * y) prod_xy_type;
		auto a = x * y;

		typedef decltype(cx * cy) prod_cxcy_type;	// result is prvalue
		auto b = cx * cy;

		typedef decltype(d1 < d2 ? d1 : d2) cond_type;	// result is lvalue. & is added.
		auto c = d1 < d2 ? d1 : d2;

		typedef decltype(x < d2 ? x : d2) cond_type_mixed;	// promotion of x to double
		auto d = x < d2 ? x : d2;

		//auto d = std::min(x, dbl);	// error
	}

	template<typename T, typename S>
	auto FpMinWrong(T x, S y) -> decltype(x < y ? x : y)
	{
		return x < y ? x : y;
	}

	template<typename T, typename S>
	auto FpMin(T x, S y) -> typename std::remove_reference<decltype(x < y ? x : y)>::type
	{
		return x < y ? x : y;
	}

	void Ex12()
	{
		int i = 42;
		double d = 45.1;
		//auto a = std::min(i, d);	// error : 'std::min' : no matching overloaded function found
		auto a = std::min(static_cast<double>(i), d);

		int& j = i;

		typedef decltype(FpMinWrong(d, d)) fpmin_return_type1;
		typedef decltype(FpMinWrong(i, d)) fpmin_return_type2;
		typedef decltype(FpMinWrong(j, d)) fpmin_return_type3;
	}

	void Ex13()
	{
		vector<int> vec;	// vec is empty
		typedef decltype(vec[0]) integer;
	}

	template<typename R>
	class SomeFunctor
	{
	public:
		typedef R result_type;

		SomeFunctor()
		{}

		result_type operator()()
		{
			return R();
		}
	};

	void Ex14()
	{
		SomeFunctor<int> func;
		typedef decltype(func)::result_type integer;	// nested type
	}

	void Ex15()
	{
		auto lambda = []() { return 42; };
		decltype(lambda) lambda2(lambda);
		decltype((lambda)) lambda3(lambda);

		cout << "Lambda functions" << endl;
		cout << &lambda << " " << &lambda2 << endl;
		cout << &lambda << " " << &lambda3 << endl;
	}

	void Ex16()
	{
		// generic lambda
		auto lambda = [](auto x, auto y)
		{
			return x + y;
		};

		cout << lambda(1.1, 2) << " " << lambda(3, 4) << lambda(4.5, 22) << endl;
	}
};

int main()
{
	Examples examples;

	examples.Ex1();
	examples.Ex2();
	examples.Ex3();
	examples.Ex10();
	examples.Ex12();
	examples.Ex14();
	examples.Ex15();
	examples.Ex16();

	return 0;
}