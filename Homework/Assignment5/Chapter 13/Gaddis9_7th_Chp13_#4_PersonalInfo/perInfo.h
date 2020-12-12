/*
 * To change this license header, choose License Headers in Project Properties.

/* 
 * File:   perInfo.h
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 7:46 PM
 */

#ifndef PERINFO_H
#define PERINFO_H

#include <iostream>
#include <string>
using namespace std;

class PI{
private:
    string name;
    string address;
    int age;
    string pNum;

public:
    //constructor with default values
    PI(string n = "", string add = "", int a = 0, string p = "000-000-0000")
    {
        name = n;
        address = add;
        age = a;
        pNum = p;
    }

    //getter functions
    const string getName()
    {
        return name;
    }

    const string getAddress()
    {
        return address;
    }

    const int getAge()
    {
        return age;
    }

    const string getpNum()
    {
        return pNum;
    }

    //setter functions
    void setName(string n)
    {
        name = n;
    }

    void setAddress(string add)
    {
        address = add;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setPhoneNumber(string p)
    {
        pNum = p;
    }
};

#endif /* PERINFO_H */

