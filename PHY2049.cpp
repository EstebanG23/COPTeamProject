//
//  PHY2049.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright © 2016 Esteban Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "PHY2049.h"

Phy2049::Phy2049() {
	for (int i = 0; i<20; i++) {
		exams[i] = -1;
	}

	for (int i = 0; i<10; i++) {
		quizzes[i] = -1;
	}

	for (int i = 0; i<13; i++) {
		homework[i] = -1;
	}
}

void Phy2049::calcGpa() {
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
	avgHW = avgHW / (numHW * 8 * .9);
	if (avgHW>1) {
		avgHW = 1;
	}
	avgexam = avgexam / (numexam * 20);

	tempGpa = (avgexam*.75) + (avgHW*.05) + (avgquiz*.2) + (hittPoints*.05);


	this->gpa = tempGpa;
}

void Phy2049::updateExam(int examNum, double score) {
	this->exams[examNum] = score;
}

void Phy2049::updateFinal(int score) {
	this->finals = score;
}

void Phy2049::updateQuiz(int quizNum, double score) {
	this->quizzes[quizNum] = score;
}

void Phy2049::updateHomework(int homeworkNum, double score) {
	this->homework[homeworkNum] = score;
}

void Phy2049::updateHittPoints(double score) {
	this->hittPoints = score;
}