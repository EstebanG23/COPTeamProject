#include "stdafx.h"
#include "MAC2313.h"

//This method condenses all the points and then sets the gpa value accordingly
void MAC2313::calcGPA() {
	double percentage = 0;
	percentage += (participation * 0.05);
	percentage += ((pointSummer(webAssign) / 27) * 0.125);
	percentage += ((pointSummer(quizzes) / 13) * 0.125);
	percentage += ((pointSummer(exams) / 3) * 0.5);
	percentage += (finalExam * 0.2); //assuming final exam grade will be named finalExam instead of just final

	//these ifs serve to set the gpa according to the total percentage value
	//Keeran does not do minus grades apparently, which is why this one is shorter than the others
	if (percentage >= 90) {
		gpa = 4.0;
	}
	else if (percentage >= 87 && percentage < 90) {
		gpa = 3.33;
	}
	else if (percentage >= 80 && percentage < 87) {
		gpa = 3;
	}
	else if (percentage >= 77 && percentage < 80) {
		gpa = 2.33;
	}
	else if (percentage >= 70 && percentage < 77) {
		gpa = 2;
	}
	else if (percentage >= 67 && percentage < 70) {
		gpa = 1.33;
	}
	else if (percentage >= 60 && percentage < 67) {
		gpa = 1;
	}
	else {
		gpa = 0;
	}
}
//these methods take in a new grade value and change or set the existing value
//may need this-> pointer, not sure because I can't test the functionality
//if it does, it would be redone like this: MAC2313->finalExam = newScore;
void MAC2313::updateParticipation(double newScore) {
	participation = newScore;
}
void MAC2313::updateWebAssign(int assignmentNumber, double newScore) {
	webAssign[assignmentNumber] = newScore;
}
void MAC2313::updateQuiz(int quizNumber, double newScore) {
	quizzes[quizNumber] = newScore;
}
void MAC2313::updateExam(int examNumber, double newScore) {
	exams[examNumber] = newScore;
}
void MAC2313::updateFinal(double newScore) {
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