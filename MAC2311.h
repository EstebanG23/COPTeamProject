#include <array>

//this bit says that this particular class is a child of Course
class MAC2311 : private Course { //not sure if private is the thing to use here
private:
	//NOTE: Exams and Final in this course are out of 75 points each
	//Course grade is based on 450 available points
	//Final grade can replace lowest exam grade if it is better
	double hittPoints; //40 points
	std::array <double, 13> webAssign; // total maxes at 50 points
	std::array <double, 10> quizzes; //best 8 of 10, 6 points each
	std::array <double, 5> writtenHomework; //best 4 of 5, 3 points each
	
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
	void updateExam(int, double) {

	}
	void updateFinal(double) {

	}
	void examReplace(std::array, double) {

	}
	double pointSummer(std::array) {

	}
	double bestOfQuizzes(std::array) {

	}
	double bestOfWrittenHomework(std::array) {

	}
}