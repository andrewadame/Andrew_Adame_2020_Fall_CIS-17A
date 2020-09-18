/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework Review
* CLASS          : CIS-17A
* SECTION        : Chapter 3
* DUE DATE       : 09/07/2020
 ************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    string month;
    float userInput;
    float sales;
    float countyTax;
    float stateTax;
    float totalTax;

    cout << "This program is designed to calculate your total monthly sales tax!";
    cout << endl;
    cout << "-------------------------------------------------------------------";
    cout << endl;
    cout << "Please enter the month: ";
    cin >> month;
    cout << "Please enter the amount of sales tax collected: ";
    cin >> userInput;
    cout << endl;

    sales = (userInput)/(1.06);
    countyTax = (userInput) * (.02);
    stateTax = (userInput) * (.04);
    totalTax = countyTax + stateTax;

    cout << "Month: " << month << endl;
    cout << "-------------------" << endl;
    cout << right;
    cout << "Total Collected: " << setw(11) << "$ ";
    cout << fixed << setprecision(2) << userInput << endl;
    cout << "Sales: " << setw(21) << "$ ";
    cout << setprecision(2) << sales << endl;
    cout << "County Sales Tax: " << setw(10) << "$ ";
    cout << setprecision(2) << countyTax << endl;
    cout << "State Sales Tax: " << setw(11) << "$ ";
    cout << setprecision(2) << stateTax << endl;
    cout << "Total Sales Tax: " << setw(11) << "$ ";
    cout << setprecision(2) << totalTax;


    return 0;
}