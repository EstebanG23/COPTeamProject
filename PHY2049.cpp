//
//  PHY2049.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright 2016 Esteban Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "PHY2049.h"
#include <iostream>
#include <array>

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

	tempGpa = (avgexam * 75) + (avgHW * 5) + (avgquiz * 20) + (hittPoints*.05);

	if (tempGpa >= 85) {
		gpa = 4.0;
	}
	else if (tempGpa >= 80 && tempGpa < 85) {
		gpa = 3.67;
	}
	else if (tempGpa >= 75 && tempGpa < 80) {
		gpa = 3.33;
	}
	else if (tempGpa >= 70 && tempGpa < 75) {
		gpa = 3;
	}
	else if (tempGpa >= 65 && tempGpa < 70) {
		gpa = 2.67;
	}
	else if (tempGpa >= 60 && tempGpa < 65) {
		gpa = 2.33;
	}
	else if (tempGpa >= 55 && tempGpa < 60) {
		gpa = 2;
	}
	else if (tempGpa >= 50 && tempGpa < 55) {
		gpa = 1.67;
	}
	else if (tempGpa >= 45 && tempGpa < 50) {
		gpa = 1.33;
	}
	else if (tempGpa >= 40 && tempGpa < 45) {
		gpa = 1;
	}
	else if (tempGpa >= 35 && tempGpa < 40) {
		gpa = 0.67;
	}
	else {
		gpa = 0;
	}
}

void Phy2049::updateExam(int examNum, double score) {
	this->exams[examNum] = score;
}

void Phy2049::updateFinal(double score) {
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

void Phy2049::printAll() {
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

	cout << "Quizzes: " << endl;
	for (size_t i = 0; i < quizzes.size(); i++) {
		cout << i + 1 << ". " << quizzes[i] << endl;
	}
	cout << endl;
	cout << "Finals: " << finals << endl;
	cout << endl;
}