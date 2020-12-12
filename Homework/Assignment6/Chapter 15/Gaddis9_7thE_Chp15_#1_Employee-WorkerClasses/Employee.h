/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: andre
 *
 * Created on December 4, 2020, 7:42 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int NUM;
    int dHire;
    int mHire;
    int yHire;
    
public:
    //DEFAULT CONSTRUCTOR
    Employee()
    {
        name = "";
        NUM = 0;
        dHire = 0;
        mHire = 0;
        yHire = 0;
        
    }
    
    //OVERLOADED CONSTRUCTOR
    Employee(string n, int num, int d, int m, int y)
    {
        name = n;
        NUM = num;
        dHire = d;
        mHire = m;
        yHire = y;
    }
    
    //GETTER FUNCTIONS
    const string getName()
    {
        return name;
    }
    
    const int getNUM()
    {
        return NUM;
    }
    
    const string getHireDate()
    {
        string dt = "";

        //fill string with data
        dt += to_string(dHire) + "/" + to_string(mHire) + "/" + to_string(yHire);

        //return string
        return dt;
    }
    
    //SETTER FUNCTION
    void setName(string n)
    {
        name = n;
    }
    
    void setNUM(int num)
    {
        NUM = num;
    }
    
    void setHireDate(int d, int m, int y)
    {
        dHire = d;
        mHire = m;
        yHire = y;
    }
};


#endif /* EMPLOYEE_H */

