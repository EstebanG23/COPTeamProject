//
//  CHM2045.cpp
//  COPTeamProject
//
//  Created by Esteban Gonzalez on 11/12/16.
//  Copyright © 2016 Esteban Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "Course.cpp"


using namespace std;

class Chm2045: public Course{
private:
    double homework [20];
    double hittPoints [20];
    
public:
    void calcGpa();
    void updateExam(int examNum, double score);
    void updateFinal(int score);
    void updateHomework(int homeworkNum, double score);
    void updateHittPoints(int hittNum, double score);
};

void Chm2045::calcGpa(){
    
}

void Chm2045::updateExam(int examNum, double score){
    this->exams[examNum]=score;
}

void Chm2045::updateFinal(int score){
    this->finals=score;
}


void Chm2045::updateHomework(int homeworkNum, double score){
    this->homework[homeworkNum]=score;
}

void Chm2045::updateHittPoints(int hittNum, double score){
    this->hittPoints[hittNum]=score;
}
