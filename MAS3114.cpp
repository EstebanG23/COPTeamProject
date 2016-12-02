#include "stdafx.h"
#include "MAS3114.h"

//This method condenses all the points and then sets the gpa value accordingly
void MAS3114::calcGPA() {
	double totalPoints;
	totalPoints += pointSummer(homework);
	totalPoints += pointSummer(projects);
	totalPoints += pointSummer(exams);
	totalPoints += participation;
	totalPoints += quiz;

	//these ifs serve to set the gpa according to the total point value
	//the syllabus based the final grade on percentage so I converted it for the checks
	double percentage = (totalPoints / 572.5) * 100;

	if (percentage >= 90) {
		gpa = 4.0;
	}
	else if (percentage >= 86 && percentage < 90) {
		gpa = 3.67;
	}
	else if (percentage >= 82 && percentage < 86) {
		gpa = 3.33;
	}
	else if (percentage >= 78 && percentage < 82) {
		gpa = 3;
	}
	else if (percentage >= 74 && percentage < 78) {
		gpa = 2.67;
	}
	else if (percentage >= 70 && percentage < 74) {
		gpa = 2.33;
	}
	else if (percentage >= 66 && percentage < 70) {
		gpa = 2;
	}
	else if (percentage >= 62 && percentage < 66) {
		gpa = 1.67;
	}
	else if (percentage >= 58 && percentage < 62) {
		gpa = 1.33;
	}
	else if (percentage >= 54 && percentage < 58) {
		gpa = 1;
	}
	else if (percentage >= 50 && percentage < 54) {
		gpa = 0.67;
	}
	else {
		gpa = 0;
	}
}
//these methods take in a new grade value and change or set the existing value
//may need this-> pointer, not sure because I can't test the functionality
//if it does, it would be redone like this: MAS3114->finalExam = newScore;
void MAS3114::updateHomework(int homeworkNumber, double newScore) {
	homework[homeworkNumber] = newScore;
}
void MAS3114::updateProjects(int projectNumber, double newScore) {
	projects[projectNumber] = newscore;
}
void MAS3114::updateParticipation(double newScore) {
	participation = newScore;
}
void MAS3114::updateQuiz(double newScore) {
	quiz = newScore;
}
void MAS3114::updateExams(int examNumber, double newScore) {
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