/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductionWorker.h
 * Author: andre
 *
 * Created on December 4, 2020, 7:42 PM
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include <string>
#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee
{
private:
    int shift;
    float payRate;
public:
    //DEFAULT CONSTRUCTOR
    ProductionWorker() : Employee()
    {
        shift = 1;
        payRate = 0;
    }
    
    //OVERLOADED CONSTRUCTOR
    ProductionWorker(string n, int num, int d, int m, 
    int y, int sh, float pR):
    
    Employee(n, num, d, m, y)
    {
        shift = sh;
        payRate = pR;
    }
    
    //GETTER FUNCTIONS
    const string getShift()
    {
        if(shift == 1)
        {
            return "Day";
        }
        return "Night";
    }
    
    const float getPayRate()
    {
        return payRate;
    }
    
    //SETTER FUNCTIONS
    void setShift(int sh)
    {
        shift = sh;
    }
    
    void setPayRate(float pR)
    {
        payRate = pR;
    }
    
};



#endif /* PRODUCTIONWORKER_H */

