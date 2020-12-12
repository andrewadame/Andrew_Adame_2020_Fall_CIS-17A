

/* 
 * File:   main.cpp
 * Author: Andrew Adame
 *
 * Created on November 12, 2020, 4:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class DoY
{
private:
    int dy;
    static string mths[12];
    static int numDays[12];
    
    int mthIndex = 0;
    
public:
    //CONSTRUCTOR
    DoY(int d)
    {
        dy = d;
    }
    
    //PRINT DATE
    void print()
    {
        for(int i = 0; i < 12; i++)
        {
            if(dy <= numDays[i])
            {
                break;
            }
            else
            {
                dy -= numDays[i];
                mthIndex++;
            }
        }
        cout << mths[mthIndex] << dy;
    }
    
};

string DoY::mths[12] = {"January ", "February ", "March ", "April ",
                                "May ", "June ", "July ", "August ",
                                "September ", "October ", "November ", "December "};

int DoY::numDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char** argv) 
{
    //DECLARING INPUT
    int userInput;
    cout << "Enter a day number between 1-365: ";
    cin >> userInput;
    
    //CHECK VALIDATION
    while(userInput < 1 || userInput > 365)
    {
        cout << "INCORRECT INPUT: Enter a number between 1-365: ";
        cin >> userInput;
    }
    
    //OBJECT W/ USERINPUT
    DoY dyNum(userInput);
    
    //DISPLAY RESULTS
    dyNum.print();

    return 0;
}

