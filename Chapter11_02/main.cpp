#include "Student.h"
#include "Teacher.h"

int main()
{
	Student student("Jack Jack");
	student.SetName("Dash");

	Teacher teacher("Prof. Hong");
	teacher.SetName("Prof. Good");

	std::cout << student << std::endl;
	std::cout << teacher << std::endl;

	student.DoNothing();
	teacher.DoNothing();

	student.Study();
	teacher.Teach();

	Person person;
	person.SetName("Mr. Incredible");
	person.GetName();
	//person.Study();	// error
	//person.Teach();	// error

	return 0;
}