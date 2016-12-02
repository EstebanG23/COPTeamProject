#include "stdafx.h"
#include "COP3503.h"

//This method condenses all the points as percentages and then sets the gpa value accordingly
void COP3503::calcGpa() {
	double percentage = 0;
	percentage += ((pointSummer(assignments) / 3) * 0.3);
	percentage += ((pointSummer(exams) / 2) * 0.4);
	percentage += (project * 0.3);
	//these ifs serve to set the gpa according to the total percentage value
	if (percentage >= 93) {
		gpa = 4.0;
	}
	else if (percentage >= 90 && percentage < 93) {
		gpa = 3.67;
	}
	else if (percentage >= 87 && percentage < 90) {
		gpa = 3.33;
	}
	else if (percentage >= 83 && percentage < 87) {
		gpa = 3;
	}
	else if (percentage >= 80 && percentage < 83) {
		gpa = 2.67;
	}
	else if (percentage >= 77 && percentage < 80) {
		gpa = 2.33;
	}
	else if (percentage >= 73 && percentage < 77) {
		gpa = 2;
	}
	else if (percentage >= 70 && percentage < 73) {
		gpa = 1.67;
	}
	else if (percentage >= 67 && percentage < 70) {
		gpa = 1.33;
	}
	else if (percentage >= 63 && percentage < 67) {
		gpa = 1;
	}
	else if (percentage >= 60 && percentage < 63) {
		gpa = 0.67;
	}
	else {
		gpa = 0;
	}
}
//these methods take in a new grade value and change or set the existing value
//may need this-> pointer, not sure because I can't test the functionality
//if it does, it would be redone like this: COP3503->groupProject = newScore;
void COP3503::updateAssignments(int assignmentNumber, double newScore) {
	assignments[assignmentNumber] = newScore;
}
void COP3503::updateGroupProject(double newScore) {
	groupProject = newScore;
}
void COP3503::updateExams(int examNumber, double newScore) {
	exams[examNumber] = newScore;
}
//this is a generic thing that adds up the contents of an array and returns the value
double pointSummer(std::array grades) {
	double total = 0;
	for (int i = 0; i < grades.size(); i++) {
		total += grades[i];
	}
	return total;
}