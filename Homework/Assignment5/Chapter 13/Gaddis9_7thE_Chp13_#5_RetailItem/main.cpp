
/* 
 * File:   retailItem.h
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 8:54 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "RetailItem.h"

using namespace std;

int main()
{
    //DECLARE VARIABLES
    RetailItem items[3] = 
    {
        RetailItem("Jacket", 12, 59.95),
        RetailItem("Designer Jeans", 40, 34.95),
        RetailItem("Shirt", 20, 24.95)
    };

    //DISPLAY RESULTS
    cout << "Description" << endl;
    cout << "Units" << endl;
    cout << "Price" << endl;
    cout << "-------------------------------------";
    cout << "-------------------------------" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "Item #" << i+1 << endl << setw(30) << left;
        cout << items[i].getDescription() << setw(20);
        cout << setw(20) << items[i].getUnits() << setw(20);
        cout << items[i].getPrice() << endl;
    }
    return 0;
}