#include "Course.h"
#include <array>
class Phy2049 : public Course {
private:
	array<double, 10> quizzes;
	array<double, 13> homework;
	double hittPoints;

public:
	void calcGpa();
	void updateExam(int examNum, double score);
	void updateFinal(int score);
	void updateQuiz(int quizNum, double score);
	void updateHomework(int homeworkNum, double score);
	void updateHittPoints(double score);
	void printAll();
	Phy2049();
};
