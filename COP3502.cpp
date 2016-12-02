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
    double homework [20];
    double progAssignments [20];
    double labs [20];
    
    
public:
    void calcGpa();
    void updateExam(int examNum, double score);
    void updateFinal(double score);
    void updateHomework(int homeworkNum, double score);
    void updateLab(int hittNum, double score);
    void updateProgAssignments(int progNum, double score);
    void initializearrays();
};

void Chm2045::initializearrays(){
    for (int i=0;i<20;i++){
        exams[i]=-1;
        labs[i]=-1;
        homework[i]=-1;
        progAssignments[i]=-1;
    }
}

void Chm2045::calcGpa(){
    double tempGPA;
    int numHW=0;
    double avgHW=0;
    int numProg=0;
    double avgProg=0;
    
    int numLabs=0;
    double avgLabs=0;
    double lablowest=100;
    double labsecondlowest=100;
    
    int numexams=0;
    double avgexams=0;
    
    for (int i=0;i<20;i++){
        if (homework[i]!=-1){
            numHW++;
            avgHW+=homework[i];
        }
    }
    for (int i=0;i<20;i++){
        if (progAssignments[i]!=-1){
            numProg++;
            avgProg+=progAssignments[i];
        }
    }
    for (int i=0;i<20;i++){
        if (labs[i]!=-1){
            numLabs++;
            avgLabs+=labs[i];
            if (labs[i]<lablowest && labs[i]==100) {
                labsecondlowest=lablowest;
                lablowest=labs[i];
            }else if (labs[i]<lablowest){
                lablowest=labs[i];
            }
            else if(labs[i]<labsecondlowest){
                labsecondlowest=labs[i];
            }
        }
    }
    for (int i=0;i<20;i++){
        if (exams[i]!=-1){
            numexams++;
            avgexams+=exams[i];
        }
    }
    
    avgHW=avgHW/numHW;
    avgProg=avgProg/numProg;
    avgLabs=avgLabs/numLabs;
    avgexams=avgexams/numexams;
    
    tempGPA=(avgHW*.20)+(avgProg*.20)+(avgLabs*.1)+(avgexams*.5);
    
    this->gpa=tempGPA;
}

void Chm2045::updateExam(int examNum, double score){
    this->exams[examNum]=score;
}

void Chm2045::updateFinal(double score){
    this->finals=score;
}

void Chm2045::updateHomework(int HWNum, double score){
    this->homework[HWNum]=score;
}

void Chm2045::updateLab(int labNum, double score){
    this->labs[labNum]=score;
}
    
void Chm2045::updateProgAssignments(int progNum, double score){
    this->progAssignments[progNum]=score;
}

