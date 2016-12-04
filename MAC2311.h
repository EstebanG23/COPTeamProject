#include "Course.h"
#ifndef _MAC2311_H_
#define _MAC2311_H_

//the ifndef and define stuff was a bug fix relating to something called a header guard

//this bit says that this particular class is a child of Course
class MAC2311 : public Course { 
private:
	//NOTE: Exams and Final in this course are out of 75 points each
	//Course grade is based on 450 available points
	//Final grade can replace lowest exam grade if it is better
	double hittPoints; //40 points
	double webAssign[13]; // total maxes at 50 points, enter these grades as percentages
	double quizzes[10]; //best 8 of 10, 6 points each
	double writtenHomework[5]; //best 4 of 5, 3 points each

public:
	MAC2311::MAC2311();
	void calcGPA();
	void updateHittPoints(double);
	void updateWebAssign(int, double);
	void updateQuiz(int, double);
	void updateWrittenHomework(int, double);
	void updateExam(int, double);
	void updateFinal(double);
	void examReplace(double[], double);
	double pointSummer(double[], int);
	double bestOfQuizzes(double[]);
	double bestOfWrittenHomework(double[]);
	double webAssignCalculator(double[]);
};
#endif
