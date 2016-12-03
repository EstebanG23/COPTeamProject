#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <algorithm>
#include "CourseManager.h"

using namespace std;

string currentCourse;

void toLower(string& str) {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] > 64 && str[i] < 90) {
			str[i] = tolower(str[i]);
		}
	}
}

bool areEqualCourses(Course item) {
	string itemName = item.getCourseName();
	toLower(itemName);

	toLower(currentCourse);

	return itemName.compare(currentCourse) == 0;
}

void CourseManager::addCourse(Course course) {
	if (search(course.getCourseName()).getCourseName().compare("") == 0) {
		courses->push_back(course);
	}
	else {
		cout << "Cannot add course." << endl;
	}
}

void CourseManager::deleteCourse(string courseName) {
	currentCourse = courseName;
	courses->remove_if(areEqualCourses);
}

void CourseManager::printCourses() {
	cout << "Your courses:" << endl;
	list<Course>::iterator itr;
	int count = 1;
	for (itr = courses->begin(); itr != courses->end(); itr++) {
		cout << count++ << ". ";
		Course printCourse = *itr;
		printCourse.printCourse();
	}
	cout << endl;
}


void CourseManager::printAll() {
	cout << "Your courses:" << endl;
	list<Course>::iterator itr;
	int count = 1;
	for (itr = courses->begin(); itr != courses->end(); itr++) {
		cout << count++ << ". ";
		Course printCourse = *itr;
		printCourse.printAll();
	}
	cout << endl;
}

double CourseManager::getGpa() {
	return overallGPA;
}

void CourseManager::setGpa(double Gpa, int credits) { //Have to add in credits
	double earnedGpa = (Gpa*credits);
	overallCreditHours += credits;
	totalGradePoints += earnedGpa;
	overallGPA = (totalGradePoints / overallCreditHours);
}

Course CourseManager::search(string courseName) {
	currentCourse = courseName;
	if (courses->empty())
	{
		Course retCourse = *new Course();
		retCourse.setCourseName("");

		return retCourse;
	}

	auto findIter = find_if(courses->begin(), courses->end(), areEqualCourses);

	if (findIter == courses->end()) {
		Course retCourse = *new Course();
		retCourse.setCourseName("");

		return retCourse;
	}
	else {
		return *findIter;
	}
}

Course CourseManager::findAt(int position) {
	int count = 0;

	list<Course>::iterator itr;
	for (itr = courses->begin(); itr != courses->end(); itr++) {
		if (count++ == position) {
			return *itr;
		}
	}

	Course retCourse;
	retCourse.setCourseName("");
	return retCourse;
}