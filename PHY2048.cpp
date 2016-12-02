//
//  PHY2048.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright © 2016 Esteban Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "Course.cpp"


using namespace std;

class Phy2048: public Course{
private:
    double quizzes [10];
    double homework [13];
    double hittPoints;
    
public:
    void calcGpa();
    void updateExam(int examNum, double score);
    void updateFinal(int score);
    void updateQuiz(int quizNum, double score);
    void updateHomework(int homeworkNum, double score);
    void updateHittPoints(double score);
    void initializearrays();
};

void Phy2048::initializearrays(){
    for (int i=0;i<20;i++){
        exams[i]=-1;
        quizzes[i]=-1;
        homework[i]=-1;
    }
}


void Phy2048::calcGpa(){
    double tempGpa;
    int numquiz=0;
    double avgquiz=0;
    int numHW=0;
    double avgHW=0;
    int numexam=0;
    double avgexam=0;
    for(int i=0;i<10;i++){
        if(quizzes[i]!=-1){
            numquiz++;
            avgquiz+=quizzes[i];
        }
    }
    for(int i=0;i<13;i++){
        if(homework[i]!=-1){
            numHW++;
            avgHW+=homework[i];
        }
    }
    for(int i=0;i<10;i++){
        if(exams[i]!=-1){
            numexam++;
            avgexam+=exams[i];
        }
    }
    avgquiz=avgquiz/(numquiz*9);
    if (avgquiz>1){
        avgquiz=1;
    }
    avgHW=avgHW/(numHW*9);
    if (avgHW>1){
        avgHW=1;
    }
    avgexam=avgexam/(numexam*20);
    
    tempGpa=(avgexam*.75)+(avgHW*.05)+(avgquiz*.2)+(hittPoints*.05);
    
    
    this->gpa=tempGpa;
}

void Phy2048::updateExam(int examNum, double score){
    this->exams[examNum]=score;
}

void Phy2048::updateFinal(int score){
    this->finals=score;
}

void Phy2048::updateQuiz(int quizNum, double score){
    this->quizzes[quizNum]=score;
}

void Phy2048::updateHomework(int homeworkNum, double score){
    this->homework[homeworkNum]=score;
}

void Phy2048::updateHittPoints(double score){
    this->hittPoints=score;
}
