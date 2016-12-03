#include <iostream>
#include <iostream>
#include <string.h>
#include <vector>
#include "InputValidator.h"
#include "Course.h"
#include "PHY2048.h"
#include "PHY2049.h"
#include "COT3100.h"
#include "COP3502.h"
#include "CHM2045.h"
#include "CourseManager.h"
#include "GPACalculatorDriver.h"

using namespace std;

int main() {
	InputValidator iv = getInputValidator();
	int menuInput = NULL;

	while (menuInput != 7) {
		cout << "1. Add previous GPA" << endl << "2. Show GPA" << endl << "3. Print courses " << endl
			<< "4. Add a course " << endl << "5. Edit a course" << endl << "6. Delete a course" << endl << "7. Exit" << endl << endl;
		menuInput = iv.getInt();
		cout << endl;

		switch (menuInput) {
		case 1:
			addPreviousGPA();
			break;
		case 2:
			showGPA();
			break;
		case 3:
			printCourses();
			break;
		case 4:
			addCourse();
			break;
		case 5:
			editCourse();
			break;
		case 6:
			deleteCourse();
			break;
		default:
			cout << "Invalid choice" << endl << endl;
		}
	}
}