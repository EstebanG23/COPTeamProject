#include "Course.h"

class Phy2048 : public Course {
private:
	double quizzes[10];
	double homework[13];
	double hittPoints;

public:
	void calcGpa();
	void updateExam(int examNum, double score);
	void updateFinal(double score);
	void updateQuiz(int quizNum, double score);
	void updateHomework(int homeworkNum, double score);
	void updateHittPoints(double score);
	void printAll();
	Phy2048();
};