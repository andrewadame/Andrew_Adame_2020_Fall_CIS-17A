/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: andre
 *
 * Created on November 30, 2020, 12:52 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "MilTime.h"
using namespace std;


int main()
{
    cout << "Creating MilitaryTime object with values ";

    MilTime time1(1345, 59);

    //DISPLAY TIME IN BOTH FORMATS
    cout << "Military format: " << time1.getHours() << endl;
    cout << "Standard format: " << time1.getStandHr() << endl;

    //MODIFYING OBJECT
    cout << "Now changing values of object...";
    time1.setTime(1630, 50);
    cout << "Military format: " << time1.getHours() << endl;
    cout << "Standard format: " << time1.getStandHr() << endl;

    return 0;
}
