/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MilTime.h
 * Author: andre
 *
 * Created on December 4, 2020, 9:21 PM
 */

#ifndef MILTIME_H
#define MILTIME_H
#include <string>
#include <iostream>
#include "Time.h"

using namespace std;

class MilTime : public Time
{
protected:
    int milHours;
    int milSeconds;
public:
    //DEFAULT CONSTRUCTOR
    MilTime() : Time()
    { 
        milHours = 0; 
        milSeconds = 0; 
    }

    // CCONSTRUCTOR
    MilTime(int milH, int milS) : Time(milH/100, milH%100, milS)
    {
            milHours = milH;
    }

    //setter function for time
    void setTime(int milH, int milS)
    {
        milHours = milH;
        milSeconds = milS;
            
        setHour(milH/100);
        setMin(milH%100);
        setSec(milS);
    }

    const int getHours()
        {
            return milHours; 
        }

    const string getStandHr()
        {   
        string res = "";
            res += to_string(getHour()) + ":" + to_string(getMin()) + ":" +
            to_string(getSec());
            return res;
        }

};
#endif

