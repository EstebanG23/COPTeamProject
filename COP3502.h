#include "Course.h"

class COP3502 : public Course {
	//specific grades to this class
private:
	array<double, 10> homework;
	array<double, 3> progAssignments;
	array<double, 10> labs;


public:
	//calculate gpa based on all grades in class
	void calcGpa();
	//setters for the class's private variables
	void updateExam(int examNum, double score);
	void updateFinal(double score);
	void updateHomework(int homeworkNum, double score);
	void updateLab(int hittNum, double score);
	void updateProgAssignments(int progNum, double score);
	//prints the specific grade values for this class
	void printAll();
	//constructor
	COP3502();
};