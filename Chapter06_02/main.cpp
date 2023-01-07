#include <iostream>

using namespace std;

#define NUM_STUDENTS	100000

void DoSomething(int studentsScores[])
{
	cout << (size_t)&studentsScores << endl;
	cout << studentsScores[0] << endl;
	cout << studentsScores[1] << endl;
	cout << studentsScores[2] << endl;
	cout << "Size in DoSomething " << sizeof(studentsScores) << endl;
}

int main()
{
	const int numStudents = 20;
	//cin >> numStudents;

	int studentsScores[numStudents] = { 1, 2, 3, 4, 5, };

	cout << (size_t)&studentsScores << endl;
	cout << studentsScores[0] << endl;
	cout << studentsScores[1] << endl;
	cout << studentsScores[2] << endl;
	cout << "Size in main " << sizeof(studentsScores) << endl;

	DoSomething(studentsScores);

	return 0;
}