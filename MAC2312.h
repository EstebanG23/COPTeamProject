#include <array>

//this bit says that this particular class is a child of Course
class MAC2312 : private Course { //not sure if private is the thing to use here
private:
	//NOTE: exams 60 points each, 80 point final
	//course grade is out of 400 points
	double hittPoints; //35 points
	double participation; //4 points
	double webAssign;//50 max out of 54.5 points
	std::array <double, 8> quizzes; //best 6 of 8, 6 points each
	std::array <double, 3> writtenHomework; //3 collected, 5 points each

	void calcGPA() {
	
	}

public:
	void updateHittPoints(double) {

	}
	void updateWebAssign(int, double) {

	}
	void updateQuiz(int, double) {

	}
	void updateWrittenHomework(int, double) {

	}
	void updateParticipation(double) {

	}
	void updateExam(int, double) {

	}
	void updateFinal(double) {

	}
	double pointSummer(std::array) {

	}
	double bestOfQuizzes(std::array) {

	}
}
