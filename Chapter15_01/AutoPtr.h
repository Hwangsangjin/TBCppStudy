#pragma once

#include <iostream>

template <typename T>
class AutoPtr
{
public:
	AutoPtr(T* ptr = nullptr)
		: m_ptr(ptr)
	{}

	~AutoPtr()
	{
		if (m_ptr != nullptr)
		{
			delete m_ptr;
		}
	}

	AutoPtr(AutoPtr& a)
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
	}

	AutoPtr& operator=(AutoPtr& a)
	{
		if (&a == this)
		{
			return *this;
		}

		delete m_ptr;
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
		return *this;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
	bool IsNull() const { return m_ptr == nullptr; }

//private:
	T* m_ptr = nullptr;
};