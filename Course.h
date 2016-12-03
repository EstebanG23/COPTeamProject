//Coure Class
//COP3503TeamProject
//
//Created by Sabrina Vega 11/12/16
//
#ifndef COURSE
#define COURSE

using namespace std;
#include <string>

//Parent class to base our other classes off of 
class Course {
public:

	Course() : courseName(), credits(), gpa(), exams(), finals() {};

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
	double exams[20];
	double finals;
};

#endif // !Course