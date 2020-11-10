/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Andrew
 * Purpose: To take the input of a customer's name, address, account number,
 * balance at beginning of month, checks written, and amount of deposits made
 * and store it in an array. Using a dynamically created structure, it will calculate
 * the new balance and the debit the account $20 if overdrawn.
 *
 * Created on October 19, 2020, 1:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct cstInfo           //CUSTOMER INFO
{
    int actNum;         //ACCOUNT NUMBER INPUT USER
    float bali;         //BALANCE AT THE BEGINNING OF THE MONTH
    float balf;         //BALANCE AT THE END OF THE MONTH
    float check;        //CHECKS WRITTEN
    float depos;        //DEPOSITS MADE BY USER
    string nm;          //USER NAME
    string addrs;       //ADDRESS INPUT BY USER
};

void storeInfo(cstInfo &);
void disInfo(cstInfo );

int main(int argc, char** argv) 
{
    //INPUT CONSOLE
    cstInfo userInput;

    //STORING AND CALCULATING USER INPUT
    storeInfo(userInput);
    
    //DISPLAY RESULTS
    disInfo(userInput);

    return 0;
}

void storeInfo(cstInfo &c)
{
    //GATHER USER INPUT
    cout << "Please Enter Your Name: ";
    getline(cin, c.nm);
    cout << "Please Enter Your Address: ";
    getline(cin, c.addrs);
    cout << "Please Enter Account Number: ";
    cin >> c.actNum;
    cout << "Please Enter Your Balance At The Beginning Of The Month: ";
    cin >> c.bali;

    cout << "Please Enter Checks Written This Month (Input 0 When Done): ";
    int i = 1;
    
    c.balf = c.bali;
    
    while(i !=0)
    {
        cin >> i;
        c.check += i;
        c.balf -= i;
    }

    //COUNTER
    int j = 1;
    c.depos = 0;
    cout << "Enter Deposits Made This Month (Input 0 When Done): ";
    while(j != 0)
    {
        cin >> j;
        c.depos += j;
        c.balf += j;
    }
    if (c.balf < 0)
    {
        c.balf -= 20;
    }
}

void disInfo(cstInfo c)
{
    //DISPLAY INFO
    cout << "Name: "<< c.nm << endl;
    cout << "Address: " << c.addrs << endl;
    cout << "Account Number: " << c.actNum << endl;
    cout << "Balance at the beginning of the month: $" << c.bali << endl;
    cout << "Total checks written: $" << c.check << endl;
    cout << "Total deposits made: $" << c.depos << endl;
    
    //IF USER OVERDRAWS
    if(c.balf < 0)
    {
        cout << "Your account was overdrawn. You have been charged an extra $20.";
        cout << endl;
    }
    cout << "Total balance: $" << c.balf << endl;
}