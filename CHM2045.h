#include "Course.h"

class Chm2045 : public Course {
private:
	array<double, 10> homework;
	double hittPoints;

public:
	void calcGpa() override;
	void updateExam(int examNum, double score);
	void updateFinal(double score);
	void updateHomework(int homeworkNum, double score);
	void updateHittPoints(double score);
	void printAll();
	Chm2045();
};