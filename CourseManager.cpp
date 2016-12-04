#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <algorithm>
#include "CourseManager.h"

using namespace std;

string currentCourse;

void toLower(string& str) {
	for (int i = 0, length = str.size(); i < length; i++) {
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
	Course *retCourse = search(course.getCourseName());
	if (retCourse->getCourseName().compare("") == 0) {
		courses->push_back(course);
	}
	else {
		cout << "Cannot add course." << endl;
	}
}

bool CourseManager::deleteCourse(string courseName) {
	currentCourse = courseName;
	if (search(courseName)->getCourseName().compare("") == 0) {
		return false;
	}
	else {
		courses->remove_if(areEqualCourses);
		return true;
	}
}

//prints summary
void CourseManager::printCourses() {

	cout << "Your overal GPA: " << calcOverallGPA() << endl;
	cout << "Your courses:" << endl;
	list<Course>::iterator itr;
	int count = 1;
	for (itr = courses->begin(); itr != courses->end(); itr++) {
		cout << count++ << ". ";
		Course printCourse = *itr;
		printCourse.printCourse();
	}
}

//prints individual grades
void CourseManager::printAll() {
	cout << "Your courses:" << endl;
	list<Course>::iterator itr;
	int count = 1;
	for (itr = courses->begin(); itr != courses->end(); itr++) {
		cout << count++ << ". ";
		Course printCourse = *itr;
		printCourse.printAll();
	}
}

double CourseManager::getGpa() {
	return overallGPA;
}

double CourseManager::calcOverallGPA() {
	list<Course>::iterator itr;
	for (itr = courses->begin(); itr != courses->end(); itr++) {
		Course course = *itr;
		if (course.getGpa() >= 0) {
			overallCreditHours += course.getCredits();
			totalGradePoints += course.getCredits() * course.getGpa();
		}
	}
	overallGPA = totalGradePoints / overallCreditHours;
	return overallGPA;
}

Course* CourseManager::search(string courseName) {
	currentCourse = courseName;
	if (courses->empty())
	{
		Course* retCourse = new Course();
		retCourse->setCourseName("");

		return retCourse;
	}

	auto findIter = find_if(courses->begin(), courses->end(), areEqualCourses);

	if (findIter == courses->end()) {
		Course* retCourse = new Course();
		retCourse->setCourseName("");

		return retCourse;
	}
	else {
		return &*findIter;
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

bool CourseManager::empty() {
	return courses->empty();
}