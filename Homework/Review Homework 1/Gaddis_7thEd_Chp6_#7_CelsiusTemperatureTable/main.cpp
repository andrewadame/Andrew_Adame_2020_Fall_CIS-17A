/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework Review
* CLASS          : CIS-17A
* SECTION        : Chapter 6
* DUE DATE       : 09/07/2020
 ************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//FUNCTION PROTOTYPES
float celsius(float fahr);

int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    float fahr; //INPUT - Fahrenheit
    int count;  //Counter
    
    //OUTPUT RESULTS
    cout << "This program will convert Fahrenheit input into Celsius." << endl;
    for (count = 0; count <= 20; count++)
    {
        cout << count << " degrees Fahrenheit is equivalent to ";
        cout << celsius(count) << " degrees Celsius." << endl;
    }
    
    return 0;
}

//FUNCTION - Will convert Fahrenheit to Celsius
float celsius(float fahr)
{
    //CALCULATIONS
    cout << fixed << setprecision(2);
    return (5.0/9.0)*(fahr - 32);
}