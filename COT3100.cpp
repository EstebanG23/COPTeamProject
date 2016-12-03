//
//  COT3100.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright © 2016 Esteban Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <string>

#include <iostream>
#include <array>
#include "COT3100.h"

using namespace std;



Cot3100::Cot3100() {
	for (int i = 0; i<20; i++) {
		exams[i] = -1;
	}
}

void Cot3100::calcGpa() {
	double tempGPA = 0;
	int numexams = 0;
	double avgexam = 0;
	for (int i = 0; i<4; i++) {
		if (exams[i] != -1) {
			numexams++;
			avgexam += exams[i];
		}
	}
	avgexam = avgexam / (numexams * 100);
	tempGPA = (avgexam*.72) + (finals*.0028);
	this->gpa = tempGPA;
}

void Cot3100::updateExam(int examNum, double score) {
	this->exams[examNum] = score;
}

void Cot3100::updateFinal(double score) {
	this->finals = score;
}
void Cot3100::printAll()
{
	cout << "Exams: " << endl;
	for (size_t i = 0; i < exams.size(); i++) {
		cout << i + 1 << ". " << exams[i] << endl;
	}
	cout << endl;
	cout << "Finals: " << finals << endl;
	cout << endl;

}