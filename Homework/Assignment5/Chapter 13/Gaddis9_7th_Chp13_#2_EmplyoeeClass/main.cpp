
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 2:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "empInfo.h"

using namespace std;

int main(int argc, char** argv) 
{
    //INITIALIZE LIST
    EMP emp[3] = 
    {
        EMP("Susan Meyers", 47899, "Accounting", "Vice President"),
        EMP("Mark Jones", 39119)
    };
    
        //SETTER FUNCTION
        emp[1].setDep("IT");
        emp[1].setPos("Programmer");
        
        emp[2].setName("Joy Rogers");
        emp[2].setID(81774);
        emp[2].setDep("Manufacturing");
        emp[2].setPos("Engineer");
        
        cout << "Name" << endl;
        cout << "ID Number" << endl;
        cout << "Department" << endl;
        cout << "Position" << endl;
        cout << "------------------" << endl;
    
    //DISPLAY RESULTS   
    for(int i = 0; i < 3; i++)
    {
        cout << emp[i].getName() << endl;
        cout << emp[i].getID() << endl;
        cout << emp[i].getDep() << endl;
        cout << emp[i].getPos() << endl;
        cout << "------------------" << endl;
    }
    
    return 0;
}

