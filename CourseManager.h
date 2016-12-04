#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <algorithm>
#include "Course.h"

using namespace std;

class CourseManager {
public:
	list<Course> courses[20];//How big should we make the array??
	double totalGradePoints;
	double overallGPA;
	int overallCreditHours;

	CourseManager() : totalGradePoints(0), overallGPA(0), overallCreditHours(0) {}

	void addCourse(Course course);

	void deleteCourse(string courseName);

	void printCourses();

	void printAll();

	double getGpa();

	double calcOverallGPA();

	Course* search(string courseName);

	Course* findAt(int position);

	bool empty();
};