#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <algorithm>
#include "Course.h"


using namespace std;

string Course::getCourseName() {
	return courseName;
}

void Course::setCourseName(string courseName) {
	this->courseName = courseName;
}

int Course::getCredits() {
	return credits;
}

void Course::setCredits(int credits) {
	this->credits = credits;
}

double Course::getGpa() {
	return gpa;
}

void Course::setGpa(double gpa) {
	this->gpa = gpa;
}

void Course::printCourse() {
	cout << courseName.c_str() << ": " << "\n\t" << "GPA: " << gpa << ", Credit Hours: " << credits << endl;
}

void Course::printAll() {
	printCourse();
}