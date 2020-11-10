
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: To determine the gross pay of any number of employees
 * input. It also converts the numerical value of the amount from
 * numerical to English.
 *
 * Created on October 19, 2020, 1:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

//STRUCTURE
struct employ
{
    int userHrs;
    float ratePay;
    float totalPay;
    string userName;
};

//FUNCTIONS
void disInfo(employ*, int);
void disInfoEng(int, int, int);
void numEng(employ*, int);
int reverse(int, int);
employ* userInfo(int);


int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    int numEmp;
    employ* infEmp;
    cout << "Please Enter Number of Employees: " << endl;
    cin >> numEmp;
    
    infEmp = userInfo(numEmp);
    disInfo(infEmp, numEmp);
    
    //DELETE DYNAMICALLY CREATED ARRAY
    delete[] infEmp;

    return 0;
}

//GATHER USER INFO
employ* userInfo(int numEmp)
{
    employ* emp = new employ[numEmp];
    for(int i = 0; i < numEmp; i++)
    {
        cout << "Please Enter Employee Name:" << endl;
        cin >> emp[i].userName;
        cin.ignore();
        
        cout << "Please Enter Hours Completed:" << endl;
        cin >> emp[i].userHrs;
        
        while(emp[i].userHrs < 0)
        {
            cout << "Input has to be a positive number, Professor:";
            cin >> emp[i].userHrs;
        }
        
        cout << "Please Enter Employee Pay Rate:" << endl;
        cin >> emp[i].ratePay;
        
        while(emp[i].ratePay < 0)
        {
            cout << "Input has to be a positive number, Professor:";
            cin >> emp[i].ratePay;
        }
        
        emp[i].totalPay = 0;
        if(emp[i].userHrs > 50)
        {
            emp[i].totalPay += (emp[i].userHrs - 50)*(emp[i].ratePay * 3);
            emp[i].totalPay += (10)*(emp[i].ratePay * 2);
            emp[i].totalPay+=(40) * emp[i].ratePay;
        }
        else if(emp[i].userHrs > 40)
        {
            emp[i].totalPay += (emp[i].userHrs - 40) * (emp[i].ratePay * 2);
            emp[i].totalPay += (40) * emp[i].ratePay;
        }
        else
        {
            emp[i].totalPay += emp[i].userHrs * emp[i].ratePay;
        }
    }
    return emp;
}

//DISPLAY INFO
void disInfo(employ *emp, int numEmp)
{
    for(int i = 0; i < numEmp; i++)
    {
        cout << "Company" << endl;
        cout << "Address" << endl;
        cout << "Name: " << emp[i].userName << setw(20) << "Amount: $" << fixed 
                << setprecision(2) << emp[i].totalPay << endl;
        cout << "Amount: ";
        numEng(emp,i);
        cout << "dollars" << endl;
        cout << "Signature Line:" << endl;
    }
}

//TRANSLATE NUM TO ENGLISH
void numEng(employ *emp, int i)
{
    int temp;
    int len = 0;
    int result;
    int n;
    temp = emp[i].totalPay;

    for(;temp > 0; temp /= 10)
    {
	len++;
    }
    
    temp = emp[i].totalPay;

    result = reverse(temp,len);
    while(result)
    {
	n = result %10;
	result /= 10;
	if(len == 1)
	{
            disInfoEng(n,len,result);       //PRINT TO 1s PLACE
	}
	else if(len == 2)
	{
            if(n == 1)
            {
                disInfoEng(n,len,result);   //PRINT TO 10ths PLACE
                break;
            }
            else
            {
                disInfoEng(n,len,result);
                len--;
            }
        }
	else if(len == 3)
	{
            disInfoEng(n,len,result);       //PRINT TO 100ths PLACE
            len--;
             if(n != 0)
             {
                cout << "hundred ";
             }
        }
	else if(len==4)             
	{
            disInfoEng(n,len,result);       //PRINT TO 1000ths PLACE
            len--;
            cout << "thousand ";
	}
    } 
	
}

//DISPLAY AMOUNT IN ENGLISH
void disInfoEng(int num,int len,int res) 
{
    res = 12;
    if(len == 1 || len == 3 || len ==4)      //PRINT TO 1s PLACE
    {                                  
        switch(num)                     
        {                                   
            case 1: cout << "one ";         //PRINT VALUES 1-9
            break;
            case 2: cout << "two ";
            break;
            case 3: cout << "three ";
            break;
            case 4: cout << "four ";
            break;
            case 5: cout << "five ";
            break;
            case 6: cout << "six ";
            break;
            case 7: cout << "seven ";
            break;
            case 8: cout << "eight ";
            break;
            case 9: cout << "nine ";
            break;
        }
    }
    else if(len == 2 || len == 5 )            //PRINT TO 10th PLACE    
    {
        switch(num)                      
        {
            case 1: switch(res)              //PRINT VALUES 10-19
            {
                case 0: cout << "ten";
                break;
                case 1: cout << "eleven";
                break;
                case 2: cout << "twelve";
                break;
                case 3: cout << "thirteen";
                break;
                case 4: cout << "fourteen";
                break;
                case 5: cout << "fifteen";
                break;
                case 6: cout << "sixteen";
                break;
                case 7: cout << "seventeen";
                break;
                case 8: cout << "eighteen";
                break;
                case 9: cout << "nineteen";
                break;
            }
            break;
            case 2: cout << "twenty ";
            break;
            case 3: cout << "thirty ";
            break;
            case 4: cout << "fourty ";
            break;
            case 5: cout << "fifty ";
            break;
            case 6: cout << "sixty ";
            break;
            case 7: cout << "seventy ";
            break;
            case 8: cout << "eighty ";
            break;
            case 9: cout << "ninty ";
            break;
            case 0: cout << "";
            break;

        }
    }
    else if(len == 6)
    {
        switch(res)                  //PRINT TO 1s PLACE   
        {                                   
            case 1: cout << "one hundred ";
            break;
            case 2: cout << "two hundred ";
            break;
            case 3: cout << "three hundred";
            break;
            case 4: cout << "four hundred ";
            break;
            case 5: cout << "five hundred ";
            break;
            case 6: cout << "six hundred ";
            break;
            case 7: cout << "seven hundred ";
            break;
            case 8: cout << "eight hundred ";
            break;
            case 9: cout << "nine hundred ";
            break;
        }
    }
}

//REVERSE NUMBERS
int reverse(int i,int lim)
{
	if(lim == 1)  //DO NOT REVERSE IF THERE IS ONE NUMBER
        {
		return i;
        }
	else        //ELSE, REVERSE NUMBERS
        {
		return (((i %10) * pow(10, lim - 1)) + reverse(i/10, lim - 1));
        }
}

    