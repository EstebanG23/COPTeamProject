//Coure Class
//COP3503TeamProject
//
//Created by Sabrina Vega 11/12/16
//
using namespace std;
#include <string>

//Parent class to base our other classes off of 
class Course {
	public:
	
		Course(): courseName(),credits(), gpa(), exams(),finals() {};
	
		string getCourseName() {
			return courseName;
		}

		void setCourseName(string courseName) {
			this->courseName = courseName;
		}

		int getCredits() {
			return credits;
		}

		void setCredits(int credits) {
			this->credits = credits;
		}

		double getGpa() {
			return gpa;
		}

		void setGpa(double gpa) {
			this->gpa = gpa;
		}

		void calcGpa() {
			
		}


	protected:
		string courseName;
		int credits;
		double gpa;
		double exams[20];
		double final;
};

