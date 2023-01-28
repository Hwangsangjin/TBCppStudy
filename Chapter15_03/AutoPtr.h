#pragma once

#include <iostream>

template <typename T>
class AutoPtr
{
public:
	AutoPtr(T* ptr = nullptr)
		: m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor" << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor" << std::endl;

		if (m_ptr != nullptr)
		{
			delete m_ptr;
		}
	}

	AutoPtr(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy constructor" << std::endl;

		// Deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}

	AutoPtr& operator=(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy assignment" << std::endl;

		if (&a == this)	// Prevent self-assignment
		{
			return *this;
		}

		if (m_ptr != nullptr)
		{
			delete m_ptr;
		}

		// Deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}

	AutoPtr(AutoPtr&& a) noexcept
		: m_ptr(a.m_ptr)
	{
		std::cout << "AutoPtr move constructor" << std::endl;

		a.m_ptr = nullptr;
	}

	AutoPtr& operator=(AutoPtr&& a) noexcept
	{
		std::cout << "AutoPtr move assignment" << std::endl;

		if (&a == this)	// Prevent self-assignment
		{
			return *this;
		}

		if (m_ptr != nullptr)
		{
			delete m_ptr;
		}

		// Shallow copy
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;

		return *this;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
	bool IsNull() const { return m_ptr == nullptr; }

private:
	T* m_ptr = nullptr;
};