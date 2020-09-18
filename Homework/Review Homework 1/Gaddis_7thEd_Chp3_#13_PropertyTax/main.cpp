/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework Review
* CLASS          : CIS-17A
* SECTION        : Chapter 3
* DUE DATE       : 09/07/2020
 ************************************************************************/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    float userVal;  //INPUT - User's input of property value.
    float assVal;   //INPUT - Assessment Value
    float propTax;  //INPUT - Property Tax
    
    //CONSOLE INPUT
    cout << "This program will calculate your assessment value and property tax." << endl;
    cout << "Please Enter Value of Property: $";
    cin >> userVal;
    
    //CALCULATIONS
    assVal = userVal * .60;
    propTax = (.64 / 100) * assVal;
    
    //OUTPUT RESULTS
    cout << "Your Assessment Value is $" << assVal << endl;
    cout << "Your Property Tax is $" << propTax;

    return 0;
}