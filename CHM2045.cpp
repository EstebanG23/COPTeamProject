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
    double hittPoints;
    
public:
    void calcGpa();
    void updateExam(int examNum, double score);
    void updateFinal(int score);
    void updateHomework(int homeworkNum, double score);
    void updateHittPoints(double score);
};

void Chm2045::calcGpa(){
    double tempGPA=0;
    int numexams=0;
    double avgexams=0;
    int numhw=0;
    double avghw=0;
    
    for (int i=0;i<20;i++){
        if (exams[i]!=-1){
            numexams++;
            avgexams+=exams[i];
        }
    }
    for (int i=0;i<20;i++){
        if (homework[i]!=-1){
            numhw++;
            avghw+=homework[i];
        }
    }
    
    avgexams=avgexams/numexams;
    avghw=avghw/numhw;
    
    tempGPA=(avgexams*.6)+(avghw*.1)+(hittPoints*.05)+(finals*.25);
    
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

void Chm2045::updateHittPoints(double score){
    this->hittPoints=score;
}
