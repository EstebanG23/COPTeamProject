#include "Course.h"

class Chm2045 : public Course {
private:
	double homework[20];
	double hittPoints;

public:
	void calcGpa();
	void updateExam(int examNum, double score);
	void updateFinal(int score);
	void updateHomework(int homeworkNum, double score);
	void updateHittPoints(double score);
	Chm2045();
};