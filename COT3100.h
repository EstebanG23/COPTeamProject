#include "Course.h"

class Cot3100 : public Course {
private:

public:
	void calcGpa();
	void updateExam(int examNum, double score);
	void updateFinal(double score);
	Cot3100();
};