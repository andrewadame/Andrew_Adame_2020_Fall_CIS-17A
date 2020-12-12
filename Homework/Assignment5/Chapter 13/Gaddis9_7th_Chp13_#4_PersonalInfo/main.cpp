/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 7:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "perInfo.h"

using namespace std;

int main()
{
    cout << "------------------------------------------------" << endl;
    cout << "Creating first object with default constructor..." << endl;
    PI obj1;

    cout << "Displaying Data" << endl;
    cout << "Name: " << obj1.getName() << endl;
    cout << "Address: " << obj1.getAddress() << endl;
    cout << "Age: " << obj1.getAge() << endl;
    cout << "Phone Number: " << obj1.getpNum() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Now setting values using mutator functions..." << endl;
    obj1.setName("John Smith");
    obj1.setAddress("New York");
    obj1.setAge(20);
    obj1.setPhoneNumber("123-123-1234");

    cout << "Displaying Data Again" << endl;
    cout << "Name: " << obj1.getName() << endl;
    cout << "Address: " << obj1.getAddress() << endl;
    cout << "Age: " << obj1.getAge() << endl;
    cout << "Phone Number: " << obj1.getpNum() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Now creating another object..." << endl;
    PI obj2("Jane Smith", "New Jersey", 25, "555-555-5555");

    cout << "Now displaying its data" << endl;
    cout << "Name: " << obj2.getName() << endl;
    cout << "Address: " << obj2.getAddress() << endl;
    cout << "Age: " << obj2.getAge() << endl;
    cout << "Phone Number: " << obj2.getpNum() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Now creating another object..." << endl;
    PI obj3("Jonathan Smith", "Washington", 55, "123-342-1233");

    cout << "Now displaying its data" << endl;
    cout << "Name: " << obj3.getName() << endl;
    cout << "Address: " << obj3.getAddress() << endl;
    cout << "Age: " << obj3.getAge() << endl;
    cout << "Phone Number: " << obj3.getpNum() << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Now setting values using mutator functions..." << endl;
    obj1.setAge(30);
    obj1.setPhoneNumber("111-222-3333");

    cout << "Now displaying its data again" << endl;
    cout << "Name: " << obj1.getName() << endl;
    cout << "Address: " << obj1.getAddress() << endl;
    cout << "Age: " << obj1.getAge() << endl;
    cout << "Phone Number: " << obj1.getpNum() << endl;
    return 0;
}