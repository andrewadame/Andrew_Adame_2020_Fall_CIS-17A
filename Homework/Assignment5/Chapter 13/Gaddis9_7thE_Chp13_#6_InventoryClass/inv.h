/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inv.h
 * Author: andre
 *
 * Created on November 10, 2020, 9:15 PM
 */

#ifndef INV_H
#define INV_H


#include <iostream>

using namespace std;

class Inventory{
private:
    int itemNumber;
    int quantity;
    float cost;
    float totalCost;
public:
    //DEFAULT CONSTRUCTOR
    Inventory(){
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }

    Inventory(int i, int q, double c)
    {
        itemNumber = i;
        quantity = q;
        cost = c;
        setTotalCost();
    }
    
    //SETTER FUNCTIONS
    void setItemNumber(int i)
    {
        itemNumber = i;
    }
    
    void setQuantity(int q)
    {
        quantity = q;
         setTotalCost();
    }

    void setCost(double c)
    {
        cost = c;
        setTotalCost();
    }

    void setTotalCost()
    {
        totalCost = quantity * cost;
    }

    const int getItemNumber()
    {
        return itemNumber;
    }

    const int getQuantity() 
    {
        return quantity;
    }

    const float getCost() 
    {
        return cost;
    }

    const double getTotalCost()
    {
        return totalCost;
    }
};


#endif /* INV_H */

