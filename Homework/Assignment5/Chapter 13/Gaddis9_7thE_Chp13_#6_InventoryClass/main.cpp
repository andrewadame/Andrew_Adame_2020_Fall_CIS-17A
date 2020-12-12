
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 9:08 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "inv.h"

using namespace std;

int main()
{
    cout << "Now creating an inventory object using default constructor..." << endl;
    Inventory inv1;

    cout << fixed << setprecision(2);
    cout << "Displaying Values" << endl;
    cout << "Item Number: " << inv1.getItemNumber() << endl;
    cout << "Quantity: " << inv1.getQuantity() << endl;
    cout << "Cost: " << inv1.getCost() << endl;
    cout << "Total Cost: " << inv1.getTotalCost() << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "Now setting new values using accessor ";
    cout << "functions..." << endl;
    inv1.setItemNumber(1234);
    inv1.setQuantity(10);
    inv1.setCost(15.95);;

    cout << "Now showing values again..." << endl;
    cout << "Item Number: " << inv1.getItemNumber() << endl;
    cout << "Quantity: " << inv1.getQuantity() << endl;
    cout << "Cost: " << inv1.getCost() << endl;
    cout << "Total Cost: " << inv1.getTotalCost() << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "Now creating another inventory object" << endl;
    cout << " using overloaded constructor..." << endl;
    Inventory inv2(5555, 100, 5.99);

    cout << "Now showing values..." << endl;
    cout << "Item Number: " << inv2.getItemNumber() << endl;
    cout << "Quantity: " << inv2.getQuantity() << endl;
    cout << "Cost: " << inv2.getCost() << endl;
    cout << "Total Cost: " << inv2.getTotalCost() << endl;
    cout << "----------------------------------------------------------------" << endl;
    return 0;
}
