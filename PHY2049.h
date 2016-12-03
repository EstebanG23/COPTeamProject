#include "Course.h"

class Phy2049 : public Course {
private:
	double quizzes[10];
	double homework[13];
	double hittPoints;

public:
	void calcGpa();
	void updateExam(int examNum, double score);
	void updateFinal(int score);
	void updateQuiz(int quizNum, double score);
	void updateHomework(int homeworkNum, double score);
	void updateHittPoints(double score);
	Phy2049();
};