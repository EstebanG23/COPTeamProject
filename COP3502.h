#include "Course.h"

class COP3502 : public Course {
private:
	array<double, 20> homework;
	array<double, 20> progAssignments;
	array<double, 20> labs;


public:
	void calcGpa();
	void updateExam(int examNum, double score);
	void updateFinal(double score);
	void updateHomework(int homeworkNum, double score);
	void updateLab(int hittNum, double score);
	void updateProgAssignments(int progNum, double score);
	void printAll();
	COP3502();
};