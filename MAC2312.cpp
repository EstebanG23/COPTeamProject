#include "stdafx.h"
#include "MAC2312.h"

//This method condenses all the points and then sets the gpa value accordingly
void MAC2312::calcGPA() {
	double totalPoints = 0;
	totalPoints += hittPoints;
	//webAssign points max out at 50
	if (webAssign > 50) {
		totalpoints += 50;
	}
	else {
		totalPoints += webAssign;
	}
	totalPoints += bestOf(quizzes);
	totalPoints += pointSummer(writtenHomework);
	totalPoints += participation;
	totalPoints += pointSummer(exams);
	totalPoints += finalExam; //assuming final exam grade will be named finalExam instead of just final
	//these ifs serve to set the gpa according to the total point value
	if (totalPoints >= 360) {
		gpa = 4;
	}
	else if (totalPoints >= 348 && totalPoints <= 459) {
		gpa = 3.67;
	}
	else if (totalPoints >= 334 && totalPoints <= 347) {
		gpa = 3.33;
	}
	else if (totalPoints >= 320 && totalPoints <= 333) {
		gpa = 3;
	}
	else if (totalPoints >= 308 && totalPoints <= 319) {
		gpa = 2.67;
	}
	else if (totalPoints >= 294 && totalPoints <= 307) {
		gpa = 2.33;
	}
	else if (totalPoints >= 280 && totalPoints <= 293) {
		gpa = 2;
	}
	else if (totalPoints >= 268 && totalPoints <= 279) {
		gpa = 1.67;
	}
	else if (totalPoints >= 254 && totalPoints <= 267) {
		gpa = 1.33;
	}
	else if (totalPoints >= 240 && totalPoints <= 253) {
		gpa = 1;
	}
	else if (totalPoints >= 228 && totalPoints <= 239) {
		gpa = 0.67;
	}
	else {
		gpa = 0;
	}
}
//these methods take in a new grade value and change or set the existing value
//may need this-> pointer, not sure because I can't test the functionality
//if it does, it would be redone like this: MAC2312->finalExam = newScore;
void MAC2312::updateHittPoints(double newScore) {
	hittPoints = newScore;
}
void MAC2312::updateWebAssign(double newScore) {
	webAssign = newScore;
}
void MAC2312::updateQuiz(int quizNumber, double newScore) {
	quizzes[quizNumber] = newScore;
}
void MAC2312::updateWrittenHomework(int homeworkNumber, double newScore) {
	writtenHomework[homeworkNumber] = newScore;
}
void MAC2312::updateParticipation(double newScore) {
	participation = newScore;
}
void MAC2312::updateExam(int examNumber, double newScore) {
	exams[examNumber] = newScore;
}
void MAC2312::updateFinal(double newScore) {
	finalExam = newScore;
}
//this is a generic thing that adds up the contents of an array and returns the value
double pointSummer(std::array grades) {
	double total = 0;
	for (int i = 0; i < grades.size(); i++) {
		total += grades[i];
	}
	return total;
}
//this method sorts through the quiz array and finds the index of the two lowest quiz grades
//these two grades are dropped
//and then the rest of the grades are summed and returned as a double
double bestOfQuizzes(std::array quizzes) {
	double bestSum = 0;
	int lowestIndex = 0;
	int nextLowest = 0;
	for (int i = 1; i < 10; i++) {
		if (quizzes[i] < quizzes[lowestIndex]) {
			nextLowest = lowestIndex;
			lowestIndex = i;
		}
	}
	bestSum = pointSummer(quizzes) - quizzes[lowestIndex] - quizzes[nextLowest];
	return bestSum;
}