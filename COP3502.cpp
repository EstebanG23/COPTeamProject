//
//  COP3502.cpp
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
    double projects [20];
    double labs [20];
    double participation;
    double reflection;
    
public:
    void calcGpa();
    void updateExam(int examNum, double score);
    void updateFinal(int score);
    void updateProject(int homeworkNum, double score);
    void updateLab(int hittNum, double score);
    void updateParticipation(double score);
    void updateReflection(double score);
};

void Chm2045::calcGpa(){
    
}

void Chm2045::updateExam(int examNum, double score){
    
}

void Chm2045::updateFinal(int score){
    //
}


void Chm2045::updateProject(int projNum, double score){
    this->projects[projNum]=score;
}

void Chm2045::updateLab(int labNum, double score){
    this->labs[labNum]=score;
}

void Chm2045::updateParticipation(double score){
    this->participation=score;
}

void Chm2045::updateReflection(double score){
    this->reflection=score;
}

