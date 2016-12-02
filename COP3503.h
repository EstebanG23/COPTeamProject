#include <array>

//this bit says that this particular class is a child of Course
class COP3503 : private Course { //not sure if private is the thing to use here
private:
	//This course is percentage based, so scores will need to be entered by percentage
	//Example, if they get a 79% on the first exam, enter 79
	//not that complicated, but important distinction because other courses do a total sum of points
	//2 exams, no final
	double groupProject;
	std::array <double, 3> assignments;

	void calcGpa() {

	}
public:
	void COP3503::updateAssignments(int, double) {

	}
	void COP3503::updateGroupProject(double) {

	}
	void COP3503::updateExams(int, double) {

	}
	double pointSummer(std::array) {

	}
};