#include "Course.h"
#ifndef _MAC2312_H_
#define _MAC2312_H_

//this bit says that this particular class is a child of Course
class MAC2312 :  public Course {
private:
	//NOTE: 3 exams 60 points each, 80 point final
	//course grade is out of 400 points
	double hittPoints; //35 points
	double participation; //4 points
	double webAssign;//50 max out of 54.5 points, a double because no specific number of assignments is given in syllabus
	double quizzes[8]; //best 6 of 8, 6 points each
	double writtenHomework[3]; //3 collected, 5 points each

public:
	MAC2312::MAC2312();
	void calcGPA();
	void updateHittPoints(double);
	void updateWebAssign(double);
	void updateQuiz(int, double);
	void updateWrittenHomework(int, double);
	void updateParticipation(double);
	void updateExam(int, double);
	void updateFinal(double);
	double pointSummer(double[], int);
	double bestOfQuizzes(double[]);
};
#endif
