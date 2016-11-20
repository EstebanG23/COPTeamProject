#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class CourseManager {

	string courses[20];//How big should we make the array??
	double overallGpa;
	double totalGradePoints;
	int overallHours;

	void addCourse(string course) {
		for (int i = 0; i <= 20; i++) {
			if (courses[i] == "") {
				courses[i] = course;
				break;
			}
			else cout << "Cannot add course.";
		}
	}

	void deleteCourse(string course) {
		for (int i = 0; i <= 20; i++) {
			if (courses[i] == course) {
				courses[i] = "";
			}
			else cout << "No course with that name";
		}
	}

	string getCourse(string course) {
		int courseNum;
		for (int i = 0; i <= 20; i++) {
			if (courses[i] == course) {
				courseNum = i;
				break;
			}
		}
		return courses[courseNum];
	}

	void printCourses() {
		for (int i = 0; i <= 20; i++)
			cout << courses[i] << endl;
	}

	double getGpa() {
		return overallGpa;
	}

	void setGpa(double Gpa, int credits) { //Have to add in credits
		double earnedGpa = (Gpa*credits);
		overallHours += credits;
		totalGradePoints += earnedGpa;
		overallGpa = (totalGradePoints / overallHours);

	}
};