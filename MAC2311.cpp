#include "stdafx.h"
#include "MAC2311.h"

//This method condenses all the points and then sets the gpa value accordingly
void MAC2311::calcGPA() {
	double totalPoints = 0;
	//webAssign points max out at 50
	if (pointSummer(webAssign) > 50) {
		totalpoints += 50;
	}
	else {
		totalPoints += pointSummer(webAssign);
	}
	totalPoints += hittPoints;
	totalPoints += bestOfQuizzes(quizzes);
	totalPoints += bestOfWrittenHomework(writtenHomework);
	examReplace(exams, finalExam); 
	//final variable can't just be named "final" like in UML diagram because it is a keyword
	//here I assume it will be named finalExam
	totalPoints += pointSummer(exams);
	totalPoints += finalExam; //the above comment also applies here
	//these ifs serve to set the gpa according to the total point value
	if (totalPoints >= 405) {
		gpa = 4;
	}
	else if (totalPoints >= 390 && totalPoints <= 404) {
		gpa = 3.67;
	}
	else if (totalPoints >= 375 && totalPoints <= 389) {
		gpa = 3.33;
	}
	else if (totalPoints >= 360 && totalPoints <= 374) {
		gpa = 3;
	}
	else if (totalPoints >= 345 && totalPoints <= 359) {
		gpa = 2.67;
	}
	else if (totalPoints >= 325 && totalPoints <= 344) {
		gpa = 2.33;
	}
	else if (totalPoints >= 305 && totalPoints <= 324) {
		gpa = 2;
	}
	else if (totalPoints >= 290 && totalPoints <= 304) {
		gpa = 1.67;
	}
	else if (totalPoints >= 275 && totalPoints <= 289) {
		gpa = 1.33;
	}
	else if (totalPoints >= 260 && totalPoints <= 274) {
		gpa = 1;
	}
	else if (totalPoints >= 245 && totalPoints <= 259) {
		gpa = 0.67;
	}
	else {
		gpa = 0;
	}
}
//these methods take in a new grade value and change or set the existing value
//may need this-> pointer, not sure because I can't test the functionality
//if it does, it would be redone like this: MAC2311->finalExam = newScore;
void MAC2311::updateHittPoints(double newScore) {
	hittPoints = newScore;
}
void MAC2311::updateWebAssign(int assignmentNumber, double newScore) {
	webAssign[assignmentNumber] = newScore;
}
void MAC2311::updateQuiz(int quizNumber, double newScore) {
	quizzes[quizNumber] = newScore;
}
void MAC2311::updateWrittenHomework(int assignmentNumber, double newScore) {
	writtenHomework[assignmentNumber] = newScore;
}
void MAC2311::updateExam(int examNumber, double newScore) {
	exams[examNumber] = newScore;
}
void MAC2311::updateFinal(double newScore) {
	finalExam = newScore;
}
//this method replaces the lowest exam grade with final exam grade if final is higher
void examReplace(std::array examGrades, double finalExam) {
	int lowestIndex = 0;
	//this part finds the index of the lowest exam grade
	for (int i = 1; i < 3; i++) {
		if (examGrades[i] < examGrades[lowestIndex]) {
			lowestIndex = i;
		}
	}
	//this part compares final exam grade to the lowest exam grade
	//if final is higher it replaces the lowest exam grade
	if (finalExam > examGrade[lowestIndex]) {
		examGrade[lowestIndex] = finalExam;
	}
}
//this is a generic thing that adds up the contents of an array and returns the value
//it is used in pretty much every course gpa calculation
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
//this method acts the same way as the one above, but it only finds the lowest homework grade
//and drops it before returning the sum of the rest of them
double bestOfWrittenHomework(std::array writtenHomework) {
	double bestSum = 0;
	int lowestIndex = 0;
	for (int i = 1; i < 5; i++) {
		if (writtenHomework[i] < writtenHomework[lowestIndex]) {
			lowestIndex = i;
		}
	}
	bestSum = pointSummer(writtenHomework) - writtenHomework[lowestIndex];
}
