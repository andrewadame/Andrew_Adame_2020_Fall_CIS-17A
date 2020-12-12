
/* 
 * File:   retailItem.h
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 8:54 PM
 */

#ifndef RETAILITEM_H
#define RETAILITEM_H

#include <iostream>
#include <string>

using namespace std;

class RetailItem
{
private:
    string description;
    int unitsOnHand;
    float price;

public:

    RetailItem(string d = "", int u = 0, double p = 0)
    {
        description = d;
        unitsOnHand = u;
        price = p;
    }

    //GETTER FUNCTIONS
    const string getDescription() 
    {
        return description;
    }

    const int getUnits()
    {
        return unitsOnHand;
    }

    const float getPrice()
    {
        return price;
    }

    //SETTER FUNCTIONS
    void setDescription(string d)
    {
        description = d;
    }

    void setUnits(int u)
    {
        unitsOnHand = u;
    }

    void setPrice(double p)
    {
            price = p;
    }
};


#endif /* RETAILITEM_H */

