
/* 
 * File:   date.h
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 1:44 PM
 */

#ifndef date_h
#define date_h

#include <iostream>
#include <string>

using namespace std;

class date
{
private:
    int mon, dy, yr;
    
    //month array
    string monName[12] = {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
    
public:
    //date constructor
    //Initializing default date (January 1st, 0)
    date(int m = 1, int d = 1, int y = 0)
    {
        mon = m;
        dy = d;
        yr = y;
    }
    
    //Get Functions
    int getMon(){
        return mon;
    }

    int getDy(){
        return dy;
    }

    int getY(){
        return yr;
    }
    
    //PRINT RESULTS
    void form1(){
        cout << mon << "/" << dy << "/" << yr;
        cout << endl;
    }

    void form2()
    {
        cout << monName[mon - 1] << " ";
        cout << dy << ", " << yr;
        cout << endl;
    }

    void form3(){
        cout << dy << " " << monName[mon - 1];
        cout << " " << yr;
        cout << endl;
    }
};

#endif

