#include <iostream>
#include <limits>

using namespace std;

int main()
{
	//const int numStudents = 5;
	int scores[] = { 84, 92, 76, 81, 56 };
	const int numStudents = sizeof(scores) / sizeof(int);

	int minScore = INT_MAX;
	int maxScore = 0;
	int totalScore = 0;

	for (size_t i = 0; i < numStudents; i++)
	{
		if (minScore > scores[i])
		{
			minScore = scores[i];
		}
		
		if (maxScore < scores[i])
		{
			maxScore = scores[i];
		}

		totalScore += scores[i];
	}

	double avgScore = static_cast<double>(totalScore) / numStudents;

	cout << minScore << endl;
	cout << maxScore << endl;
	cout << totalScore << endl;
	cout << avgScore << endl;

	/*
	int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;

	int totalScore = score0 + score1 + score2 + score3 + score4;

	double avgScore = static_cast<double>(totalScore) / numStudents;
	*/

	return 0;
}