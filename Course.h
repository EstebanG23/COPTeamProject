// Coure Class
//COP3503TeamProject
//
//Created by Sabrina Vega 11/12/16
//
#ifndef COURSE
#define COURSE

using namespace std;
#include <string>
#include <array>

//Parent class to base our other classes off of 
class Course {
public:

	Course() : courseName(), credits(-1), gpa(-1), exams(), finals() {};

	string getCourseName();

	void setCourseName(string courseName);

	int getCredits();

	void setCredits(int credits);

	double getGpa();

	void setGpa(double gpa);

	virtual void calcGpa() {}

	virtual void printCourse();

	virtual void printAll();


protected:
	string courseName;
	int credits;
	double gpa;
	array<double, 20> exams;
	double finals;
};

#endif // !Course