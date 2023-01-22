#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

using namespace std;

int main()
{
	Student* ptr_std1 = new Student("Jack Jack", 0);
	Student* ptr_std2 = new Student("Dash", 1);
	Student* ptr_std3 = new Student("Violet", 2);

	Teacher* ptr_teacher1 = new Teacher("Prof. Hong");
	Teacher* ptr_teacher2 = new Teacher("Prof. Good");

	Lecture lec1("Introduction to Computer Programming");
	lec1.AssignTeacher(ptr_teacher1);
	lec1.RegisterStudent(ptr_std1);
	lec1.RegisterStudent(ptr_std2);
	lec1.RegisterStudent(ptr_std3);

	Lecture lec2("Computational Thinking");
	lec2.AssignTeacher(ptr_teacher2);
	lec2.RegisterStudent(ptr_std1);

	// test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.Study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}

	// delete memory
	delete ptr_std1;
	delete ptr_std2;
	delete ptr_std3;

	delete ptr_teacher1;
	delete ptr_teacher2;

	return 0;
}