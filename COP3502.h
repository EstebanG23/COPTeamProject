#include "Course.h"

class COP3502 : public Course {
private:
	array<double, 10> homework;
	array<double, 3> progAssignments;
	array<double, 10> labs;


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