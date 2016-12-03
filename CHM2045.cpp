//
//  CHM2045.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright © 2016 Esteban Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <array>
#include <iostream>
#include "CHM2045.h"
using namespace std;


Chm2045::Chm2045() {
	for (int i = 0; i<20; i++) {
		exams[i] = -1;
		homework[i] = -1;
	}
}

void Chm2045::calcGpa() {
	double tempGPA = 0;
	int numexams = 0;
	double avgexams = 0;
	int numhw = 0;
	double avghw = 0;

	for (int i = 0; i<20; i++) {
		if (exams[i] != -1) {
			numexams++;
			avgexams += exams[i];
		}
	}
	for (int i = 0; i<20; i++) {
		if (homework[i] != -1) {
			numhw++;
			avghw += homework[i];
		}
	}

	avgexams = avgexams / numexams;
	avghw = avghw / numhw;

	tempGPA = (avgexams*.6) + (avghw*.1) + (hittPoints*.05) + (finals*.25);

}

void Chm2045::updateExam(int examNum, double score) {
	this->exams[examNum] = score;
}

void Chm2045::updateFinal(int score) {
	this->finals = score;
}

void Chm2045::updateHomework(int homeworkNum, double score) {
	this->homework[homeworkNum] = score;
}

void Chm2045::updateHittPoints(double score) {
	this->hittPoints = score;
}

void Chm2045::printAll()
{
	cout << "Homework: " << endl;
	for (size_t i = 0; i < homework.size(); i++) {
		cout << i + 1 << ". " << homework[i] << endl;
	}
	cout << endl;
	cout << "Hittpoints: " << hittPoints << endl;
	cout << endl;
	cout << "Exams: " << endl;
	
	for (size_t i = 0; i < exams.size(); i++) {
		cout << i + 1 << ". " << exams[i] << endl;
	}
	cout << endl;
	cout << "Finals: " <<finals << endl;
	cout << endl;
	
}
