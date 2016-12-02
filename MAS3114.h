#include <array>

//this bit says that this particular class is a child of Course
class MAS3114 : private Course { //not sure if private is the thing to use here
private:
	//there are 4 exams, 240 points total
	//No separate final exam
	double participation; //52.5 points total
	double quiz; //60 points
	std::array <double, 30> homework; // 90 points total
	std::array <double, 5> projects; //130 points total
	
	void calcGpa() {

	}
public:
	void MAS3114::updateHomework(int, double) {

	}
	void MAS3114::updateProjects(int, double) {
		
	}
	void MAS3114::updateParticipation(double) {
		
	}
	void MAS3114::updateQuiz(double) {
		
	}
	void MAS3114::updateExams(int, double) {
		
	}
	double pointSummer(std::array) {

	}
};
