#include <array>

//this bit says that this particular class is a child of Course
class MAC2313 : private Course { //not sure if private is the thing to use here
private:
	//NOTE: this class is entirely percentage based according to the syllabus
	//This means grades need to be entered as percentage values
	//For example, if they got a 95% on the first exam and 87% on the next two
	//They would enter 95, 87, and 87 
	//There are 3 exams and a final in this class
	double participation;
	std::array <double, 27> webAssign; 
	std::array <double, 13> quizzes; 
	
	void calcGPA() {


	}

public:
	void updateParticipation(double) {
	
	}
	void updateWebAssign(int, double) {

	}
	void updateQuiz(int, double) {

	}
	void updateExam(int, double) {

	}
	void updateFinal(double) {

	}
	double pointSummer(std::array) {

	}
};