#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
public:
	Lecture(const std::string& name)
		: m_name(name)
	{}

	~Lecture()
	{
		// do NOT delete teacher
		// do NOT delete students
	}

	void AssignTeacher(Teacher* const teacher)
	{
		m_teacher = teacher;
	}

	void RegisterStudent(Student* const student)
	{
		m_students.push_back(student);
	}

	void Study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		for (const auto& i : m_students)
		{
			i->SetIntelligence(i->GetIntelligence() + 1);
		}
	}

	friend std::ostream& operator<<(std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		out << lecture.m_teacher << std::endl;
		for (const auto i : lecture.m_students)
		{
			out << *i << std::endl;
		}

		return out;
	}

private:
	std::string m_name;

	Teacher* m_teacher;
	std::vector<Student*> m_students;
};