/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework Review
* CLASS          : CIS-17A
* SECTION        : Chapter 5
* DUE DATE       : 09/07/2020
 ************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    float startPop; //INPUT - Starting Population
    float totalPop; //INPUT - Total Population for Day X
    float avgPerc;  //INPUT - Average Population in %
    float avgPop;   //INPUT - Average Population
    int days;       //INPUT - Days of Population Growth
    int count;      //INPUT - Counter for Loop
    
    //CONSOLE INPUT
    cout << "This program will calculate the growth of a population." << endl;
    cout << "Please Enter Starting Population Size: ";
    cin >> startPop;
    cout << "Please Enter Average Population Increase in Percent: %";
    cin >> avgPerc;
    cout << "Please Enter Amount of Days to Calculate Population Size over: ";
    cin >> days;
    
    //OUTPUT RESULTS
    for(count = 1; count <= days; count++)
    {
        avgPop = count * (startPop * (avgPerc/100));
        totalPop = startPop + avgPop;
        cout << "Day " << count << ":" << endl;
        cout << "Population Today: " << totalPop << endl;
        
    }
    
    return 0;
}