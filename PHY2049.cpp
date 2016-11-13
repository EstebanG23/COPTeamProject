
//
//  PHY2049.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright © 2016 Esteban Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <string>
//#include "Course.cpp"


using namespace std;

class Phy2049/*: public Course*/{
private:
    double quizzes [20];
    double homework [20];
    double hittPoints [20];
    
public:
    void calcGpa();
    void updateExam(int examNum, double score);
    void updateFinal(int score);
    void updateQuiz(int quizNum, double score);
    void updateHomework(int homeworkNum, double score);
    void updateHittPoints(int hittNum, double score);
};

void Phy2049::calcGpa(){
    
}

void Phy2049::updateExam(int examNum, double score){
    
}

void Phy2049::updateFinal(int score){
    //
}

void Phy2049::updateQuiz(int quizNum, double score){
    this->quizzes[quizNum]=score;
}

void Phy2049::updateHomework(int homeworkNum, double score){
    this->homework[homeworkNum]=score;
}

void Phy2049::updateHittPoints(int hittNum, double score){
    this->hittPoints[hittNum]=score;
}
