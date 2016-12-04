using namespace std;

#pragma region fields

InputValidator iv;
CourseManager cm;
Phy2048 phy2048;
Phy2049 phy2049;
Cot3100 cot3100;
COP3502 cop3502;
Chm2045 chm2045;
const string courseNames[] = { "PHY2048", "PHY2049", "COT3100", "COP3502", "COP3503", "CHM2045", "MAC2311", "MAC2312", "MAC2313", "MAS3114" };

#pragma endregion

#pragma region helper functions

InputValidator getInputValidator() {
	return iv;
}

double getGPA() {
	double inputPreviousGPA = NULL;

	do {
		cout << "Please enter GPA: " << endl;
		inputPreviousGPA = iv.getDouble();

		if (inputPreviousGPA < 0 || inputPreviousGPA > 4) {
			cout << "GPA must be between 0.0 and 4.0" << endl;
		}
		cout << endl;
	} while (inputPreviousGPA < 0 || inputPreviousGPA > 4 || inputPreviousGPA == NULL);

	return inputPreviousGPA;
}

int getCreditHours() {
	int inputCreditHours = NULL;

	do {
		cout << "Please enter previous amount of credit hours: " << endl;
		inputCreditHours = iv.getInt();
		if (inputCreditHours < 0) {
			cout << "The number of credit hours must be greater than 0" << endl;
		}
		cout << endl;
	} while (inputCreditHours < 0 || inputCreditHours == NULL);

	return inputCreditHours;
}

string getCourseName() {
	string courseName = "";

	do {
		cout << "Please enter the name of the course: " << endl;

		courseName = iv.getString();

		if (courseName.empty()) {
			cout << "Invalid course name: " << courseName.c_str() << endl;
		}
		cout << endl;
	} while (courseName.empty());

	return courseName;
}

double getFinalGrade() {
	//we introduce a bug if the grade is 0
	cout << "Please enter the grade for the final:" << endl;
	double finalGrade = -1;

	while (finalGrade < 0) {
		finalGrade = iv.getDouble();
		if (finalGrade < 0) {
			cout << "Grade must be greater than 0" << endl;
		}
		cout << endl;
	}
	return finalGrade;
}

double getExamGrade(int examNum) {
	cout << "Please enter the grade for exam " << examNum << endl;
	double examGrade = -1;

	while (examGrade < 0) {
		examGrade = iv.getDouble();
		if (examGrade < 0) {
			cout << "Grade must be greater than 0" << endl;
		}
		cout << endl;
	}

	return examGrade;
}

double getQuizGrade(int quizNum) {
	cout << "Please enter the grade for quiz " << quizNum << endl;
	double quizGrade = -1;

	while (quizGrade < 0) {
		quizGrade = iv.getDouble();
		if (quizGrade < 0) {
			cout << "Grade must be greater than 0" << endl;
		}
		cout << endl;
	}

	return quizGrade;
}

double getHomeworkGrade(int homeworkNum) {
	cout << "Please enter the grade for homework " << homeworkNum << endl;
	double homeworkGrade = -1;

	while (homeworkGrade < 0) {
		homeworkGrade = iv.getDouble();
		if (homeworkGrade < 0) {
			cout << "Grade must be greater than 0" << endl;
		}
		cout << endl;
	}

	return homeworkGrade;
}

double getHittGrade() {
	//we introduce a bug if the grade is 0
	cout << "Please enter the grade for your hitt clicker points:" << endl;
	double hittGrade = -1;

	while (hittGrade < 0) {
		hittGrade = iv.getDouble();
		if (hittGrade < 0) {
			cout << "Grade must be greater than 0" << endl;
		}
		cout << endl;
	}
	return hittGrade;
}

double getProgrammingAssignmentGrade(int paNum) {
	//we introduce a bug if the grade is 0
	cout << "Please enter the grade for programming assignment " << paNum << ":" << endl;
	double paGrade = -1;

	while (paGrade < 0) {
		paGrade = iv.getDouble();
		if (paGrade < 0) {
			cout << "Grade must be greater than 0" << endl;
		}
		cout << endl;
	}
	return paGrade;
}

double getLabGrade(int labNum) {
	//we introduce a bug if the grade is 0
	cout << "Please enter the grade for your lab number " << labNum << ":" << endl;
	double labGrade = -1;

	while (labGrade < 0) {
		labGrade = iv.getDouble();
		if (labGrade < 0) {
			cout << "Grade must be greater than 0" << endl;
		}
		cout << endl;
	}
	return labGrade;
}

void printAllGrades() {
	if (phy2048.getGpa() > -1) {
		phy2048.printAll();
	}
	if (phy2049.getGpa() > -1) {
		phy2049.printAll();
	}
	if (cot3100.getGpa() > -1) {
		cot3100.printAll();
	}
	if (cop3502.getGpa() > -1) {
		cop3502.printAll();
	}/*
	if (cop3503.getGpa() > -1) {
		cop3503.printAll();
	}*/
	if (chm2045.getGpa() > -1) {
		chm2045.printAll();
	}
	/*if (mac2311.getGpa() > -1) {
		mac2311.printAll();
	}
	if (mac2312.getGpa() > -1) {
		mac2312.printAll();
	}
	if (mac2313.getGpa() > -1) {
		mac2313.printAll();
	}
	if (mas3114.getGpa() > -1) {
		mas3114.printAll();
	}*/
}

#pragma region addCourses

void addPHY2048() {
	phy2048 = *new Phy2048();
	phy2048.setCourseName("PHY2048");

	Course course;
	course.setCourseName("PHY2048");

	int creditHours = getCreditHours();
	phy2048.setCredits(creditHours);
	course.setCredits(creditHours);

	cm.addCourse(course);
}

void addPHY2049() {
	phy2049 = *new Phy2049();
	phy2049.setCourseName("PHY2049");

	Course course;
	course.setCourseName("PHY2049");

	int creditHours = getCreditHours();

	phy2049.setCredits(creditHours);
	course.setCredits(creditHours);

	cm.addCourse(course);
}

void addCOT3100() {
	cot3100 = *new Cot3100();
	cot3100.setCourseName("COT3100");

	Course course;
	course.setCourseName("COT3100");

	int creditHours = getCreditHours();

	cot3100.setCredits(creditHours);
	course.setCredits(creditHours);

	cm.addCourse(course);
}

void addCOP3502() {
	cop3502 = *new COP3502();
	cop3502.setCourseName("COP3502");

	Course course;
	course.setCourseName("COP3502");

	int creditHours = getCreditHours();

	cop3502.setCredits(creditHours);
	course.setCredits(creditHours);

	cm.addCourse(course);
}

void addCOP3503() {

}

void addCHM2045() {
	chm2045.setCourseName("CHM2045");

	Course course;
	course.setCourseName("CHM2045");

	int creditHours = getCreditHours();
	chm2045.setCredits(creditHours);
	course.setCredits(creditHours);

	cm.addCourse(course);
}

void addMAC2311() {

}

void addMAC2312() {

}

void addMAC2313() {

}

void addMAS3114() {

}

void addCustomCourse() {
	Course customCourse;

	customCourse.setCourseName(getCourseName());
	customCourse.setGpa(getGPA());
	customCourse.setCredits(getCreditHours());

	cm.addCourse(customCourse);
}

#pragma endregion

#pragma region editCourses

void editPHY2048() {
	//finals
	phy2048.updateFinal(getFinalGrade());
	//exams
	for (int i = 0; i < 2; i++) {
		phy2048.updateExam(i, getExamGrade(i + 1));
	}
	//quizes
	for (int i = 0; i < 10; i++) {
		phy2048.updateQuiz(i, getQuizGrade(i + 1));
	}
	//homework
	for (int i = 0; i < 13; i++) {
		phy2048.updateHomework(i, getHomeworkGrade(i + 1));
	}
	//hitt
	phy2048.updateHittPoints(getHittGrade());

	phy2048.calcGpa();
	Course* course = cm.search(phy2048.getCourseName());
	course->setGpa(phy2048.getGpa());
}

void editPHY2049() {
	//finals
	phy2049.updateFinal(getFinalGrade());
	//exams
	for (int i = 0; i < 2; i++) {
		phy2049.updateExam(i, getExamGrade(i + 1));
	}
	//quizes
	for (int i = 0; i < 10; i++) {
		phy2049.updateQuiz(i, getQuizGrade(i + 1));
	}
	//homework
	for (int i = 0; i < 13; i++) {
		phy2049.updateHomework(i, getHomeworkGrade(i + 1));
	}
	//hitt
	phy2049.updateHittPoints(getHittGrade());

	phy2049.calcGpa();
	Course* course = cm.search(phy2049.getCourseName());
	course->setGpa(phy2049.getGpa());
}

void editCOT3100() {
	//finals
	cot3100.updateFinal(getFinalGrade());
	//exams
	for (int i = 0; i < 4; i++) {
		cot3100.updateExam(i, getExamGrade(i + 1));
	}

	cot3100.calcGpa();
	Course* course = cm.search(cot3100.getCourseName());
	course->setGpa(cot3100.getGpa());
}

void editCOP3502() {
	//finals
	cop3502.updateFinal(getFinalGrade());

	//exams
	for (int i = 0; i < 2; i++) {
		cop3502.updateExam(i, getExamGrade(i + 1));
	}
	//homework
	for (int i = 0; i < 10; i++) {
		cop3502.updateHomework(i, getHomeworkGrade(i + 1));
	}
	//programming assignments
	for (int i = 0; i < 3; i++) {
		cop3502.updateProgAssignments(i, getProgrammingAssignmentGrade(i + 1));
	}
	//labs
	for (int i = 0; i < 10; i++) {
		cop3502.updateLab(i, getLabGrade(i + 1));
	}

	cop3502.calcGpa();
	Course* course = cm.search(cop3502.getCourseName());
	course->setGpa(cop3502.getGpa());
}

void editCOP3503(Course* course) {

}

void editCHM2045() {
	//finals
	chm2045.updateFinal(getFinalGrade());
	//exams
	for (int i = 0; i < 3; i++) {
		chm2045.updateExam(i, getExamGrade(i + 1));
	}
	//homework
	for (int i = 0; i < 10; i++) {
		chm2045.updateHomework(i, getHomeworkGrade(i + 1));
	}
	//hitt
	chm2045.updateHittPoints(getHittGrade());



	chm2045.calcGpa();
	Course* course = cm.search(chm2045.getCourseName());
	course->setGpa(chm2045.getGpa());
}

void editMAC2311(Course* course) {

}

void editMAC2312(Course* course) {

}

void editMAC2313(Course* course) {

}

void editMAS3114(Course* course) {

}

void editCustomCourse(Course* course) {
	course->setGpa(getGPA());
	course->setCredits(getCreditHours());
}

#pragma endregion

#pragma endregion

#pragma region menu functions

void addPreviousGPA() {
	Course previousGPA;

	previousGPA.setCourseName("Previous GPA");
	previousGPA.setGpa(getGPA());
	previousGPA.setCredits(getCreditHours());

	cm.addCourse(previousGPA);
}

void showGPA() {
	//call calc gpa functions
	//print overall gpa
	//cm must take into account somehow if a given course's gpa has not been entered yet
	//	maybe solve this by keeping track of all the courses that have not been edited yet
	//	create an array to keep track of these values
	if (cm.empty()) {
		cout << "There are no courses entered" << endl;
	}
	else {
		cm.printCourses();
	}
	cout << endl;
}

void printCourses() {
	if (cm.empty()) {
		cout << "There are no courses entered" << endl;
	}
	else {
		printAllGrades();
		cm.printAll();
	}
	cout << endl;
}

void addCourse() {
	//what happens to grades after they input a course?
	//how do they calc gpa after they add a course and do not input grades
	int inputCourse = NULL;

	do {
		cout << "Please choose from the following courses:" << endl;
		cout << "1. PHY2048" << endl << "2. PHY2049" << endl << "3. COT3100" << endl
			<< "4. COP3502" << endl << "5. COP3503" << endl << "6. CHM2045" << endl << "7. MAC2311" << endl << "8. MAC2312" << endl
			<< "9. MAC2313" << endl << "10. MAS3114" << endl << "11. Custom Course" << endl << "12. Return to main menu" << endl << endl;

		inputCourse = iv.getInt();

		if (inputCourse > 12) {
			cout << "Invalid choice: " << inputCourse << endl;
		}

		if (inputCourse == 12) {
			break;
		}
		cout << endl;
	} while (inputCourse < 0 || inputCourse > 12 || inputCourse == NULL);

	switch (inputCourse) {
	case 1:
		addPHY2048();
		break;
	case 2:
		addPHY2049();
		break;
	case 3:
		addCOT3100();
		break;
	case 4:
		addCOP3502();
		break;
	case 5:
		addCOP3503();
		break;
	case 6:
		addCHM2045();
		break;
	case 7:
		addMAC2311();
		break;
	case 8:
		addMAC2312();
		break;
	case 9:
		addMAC2313();
		break;
	case 10:
		addMAS3114();
		break;
	case 11:
		addCustomCourse();
		break;
	}
}

void editCourse() {
	//must update the cm course values for gpa whenever we edit
	//	call calc gpa after every editing?
	if (cm.empty()) {
		cout << "There are no courses to edit" << endl << endl;
		return;
	}

	cout << "Please enter the number of the course to edit:" << endl;
	cm.printCourses();
	cout << endl;
	int choice = -1;
	Course course;

	while (choice < 1) {
		choice = iv.getInt();
		course = cm.findAt(choice - 1);
		
		if (course.getCourseName().compare("") == 0) {
			cout << "Invalid input" << endl;
			choice = -1;
		}
		cout << endl;
	}

	if (course.getCourseName().compare("PHY2048") == 0) {
		editPHY2048();
	}
	else if (course.getCourseName().compare("PHY2049") == 0) {
		editPHY2049();
	}
	else if (course.getCourseName().compare("COT3100") == 0) {
		editCOT3100();
	}
	else if (course.getCourseName().compare("COP3502") == 0) {
		editCOP3502();
	}
	else if (course.getCourseName().compare("COP3503") == 0) {
		editCOP3503(&course);
	}
	else if (course.getCourseName().compare("CHM2045") == 0) {
		editCHM2045();
	}
	else if (course.getCourseName().compare("MAC2311") == 0) {
		editMAC2311(&course);
	}
	else if (course.getCourseName().compare("MAC2312") == 0) {
		editMAC2312(&course);
	}
	else if (course.getCourseName().compare("MAC2313") == 0) {
		editMAC2313(&course);
	}
	else if (course.getCourseName().compare("MAS3114") == 0) {
		editMAS3114(&course);
	}
	else {
		editCustomCourse(&course);
	}
}

void deleteCourse() {
	if (cm.empty()) {
		cout << "There are no courses to delete" << endl;
		return;
	}

	cout << "Please choose from the following courses:" << endl;
	cm.printCourses();
	cout << endl;
	int choice = -1;
	Course course;

	while (choice < 1) {
		choice = iv.getInt();
		course = cm.findAt(choice - 1);

		if (course.getCourseName().compare("") == 0) {
			cout << "Invalid input" << endl;
			choice = -1;
		}
	}

	while (!cm.deleteCourse(course.getCourseName())) {
		cout << "Invalid input" << endl;
	}
	cout << endl;
}

#pragma endregion