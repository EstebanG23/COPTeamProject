//
//  PHY2048.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright © 2016 Esteban Gonzalez. All rights reserved.
//

#include <iostream>
#include <string>
#include "PHY2048.h"

Phy2048::Phy2048() {
	for (int i = 0; i<12; i++) {
		exams[i] = -1;
	}

	for (int i = 0; i<10; i++) {
		quizzes[i] = -1;
	}

	for (int i = 0; i<13; i++) {
		homework[i] = -1;
	}
}

void Phy2048::calcGpa() {
	double tempGpa;
	int numquiz = 0;
	double avgquiz = 0;
	int numHW = 0;
	double avgHW = 0;
	int numexam = 0;
	double avgexam = 0;
	for (int i = 0; i<10; i++) {
		if (quizzes[i] != -1) {
			numquiz++;
			avgquiz += quizzes[i];
		}
	}
	for (int i = 0; i<13; i++) {
		if (homework[i] != -1) {
			numHW++;
			avgHW += homework[i];
		}
	}
	for (int i = 0; i<10; i++) {
		if (exams[i] != -1) {
			numexam++;
			avgexam += exams[i];
		}
	}
	avgquiz = avgquiz / (numquiz * 9);
	if (avgquiz>1) {
		avgquiz = 1;
	}
	avgHW = avgHW / (numHW * 9);
	if (avgHW>1) {
		avgHW = 1;
	}
	avgexam = avgexam / (numexam * 20);

	tempGpa = (avgexam*.75) + (avgHW*.05) + (avgquiz*.2) + (hittPoints*.05);


	this->gpa = tempGpa;
}

void Phy2048::updateExam(int examNum, double score) {
	this->exams[examNum] = score;
}

void Phy2048::updateFinal(double score) {
	this->finals = score;
}

void Phy2048::updateQuiz(int quizNum, double score) {
	this->quizzes[quizNum] = score;
}

void Phy2048::updateHomework(int homeworkNum, double score) {
	this->homework[homeworkNum] = score;
}

void Phy2048::updateHittPoints(double score) {
	this->hittPoints = score;
}

void Phy2048::printAll() {

}