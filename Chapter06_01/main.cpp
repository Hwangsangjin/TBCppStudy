#include <iostream>

using namespace std;

struct Rectangle
{
	int width;
	int lenght;
};

int main()
{
	int studentScore;		// 1 int variable
	int studentScores[5];	// 5 int variable

	cout << sizeof(studentScore) << endl;
	cout << sizeof(studentScores) << endl;

	studentScore = 100;

	studentScores[0] = 100;	// 1st element
	studentScores[1] = 80;	// 2nd element
	studentScores[2] = 90;	// 3rd element
	studentScores[3] = 50;	// 4th element
	studentScores[4] = 0;	// 5th element

	Rectangle rectArray[10];
	cout << sizeof(Rectangle) << endl;
	cout << sizeof(rectArray) << endl;

	rectArray[0].width = 1;
	rectArray[0].lenght = 2;

	int myArray[5];

	return 0;
}