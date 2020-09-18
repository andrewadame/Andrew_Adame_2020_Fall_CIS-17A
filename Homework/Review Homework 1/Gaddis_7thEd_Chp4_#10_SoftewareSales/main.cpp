/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework Review
* CLASS          : CIS-17A
* SECTION        : Chapter 4
* DUE DATE       : 07/09/2020
 ************************************************************************/

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    float userInput;
    float totalCost;
    
    //CONSOLE INPUT
    cout << "Please enter the amount of units sold: ";
    cin >> userInput;
    
    //OUTPUT RESULT
    if(userInput <= 0)
    {
        cout << "Please enter an amount above 0: ";
        cin >> userInput;
    }
    else if(userInput >= 1 && userInput <= 9)
    {
        totalCost = userInput * (99);
        cout << "The total cost is $" << totalCost;
    }
    else if(userInput >= 10 && userInput <= 19)
    {
        totalCost = (userInput * (99))*.20;
        cout << "The total cost is $" << totalCost;
    }
    else if (userInput >= 20 && userInput <= 49) 
    {
        totalCost = (userInput * (99))*.30;
        cout << "The total cost is $" << totalCost;
    }
    else if (userInput >= 50 && userInput <= 99)
    {
        totalCost = (userInput * (99))*.40;
        cout << "The total cost is $" << totalCost;
    }
    else if (userInput >= 100)
    {
        totalCost = (userInput * (99))*.50;
        cout << "The total cost is $" << totalCost;
    }
    
    return 0;
}