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

	void addCourse(Course course);

	bool deleteCourse(string courseName);

	void printCourses();

	void printAll();

	double getGpa();

	void setGpa(double gpa, int creditHours);

	Course* search(string courseName);

	Course findAt(int position);

	bool empty();
};