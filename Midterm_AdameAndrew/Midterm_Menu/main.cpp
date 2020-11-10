/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  Menu using Functions,
 *           extend for midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <cmath>
#include "Array.h"
#include "Stats.h"
using namespace std;

//STRUCTURES AND FUNCTIONS FOR PRBLM 1//////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////

//STRUCTURES AND FUNCTIONS FOR PRBLM 2//////////////////////////////////////////

struct employ
{
    int userHrs;
    float ratePay;
    float totalPay;
    string userName;
};

void disInfo(employ*, int);
void disInfoEng(int, int, int);
void numEng(employ*, int);
int reverse(int, int);
employ* userInfo(int);
////////////////////////////////////////////////////////////////////////////////

//STRUCTURES AND FUNCTIONS FOR PRBLM 3//////////////////////////////////////////
//Function Prototypes I supply
Array *fillAry(int,int);        //Fill an array and put into a structure
void prntAry(const Array *,int);//Print the array 
int *copy(const int *,int);     //Copy the array
void mrkSort(int *,int);        //Sort an array
void prtStat(const Stats *);    //Print the structure
void rcvrMem(Array *);          //Recover memory from the Array Structure
void rcvrMem(Stats *);          //Recover memory from Statistics Structure

//Functions you are to supply
Stats *stat(const Array *);     //Find & store mean, median, & modes in structure
////////////////////////////////////////////////////////////////////////////////

//STRUCTURES AND FUNCTIONS FOR PRBLM4///////////////////////////////////////////
/*
 * NOTE: I hope it isn't an issue I placed my problem 4 programs in the same
 * project :)
 */

//FUNCTIONS
void encrypt(int);
void decrypt(int);
////////////////////////////////////////////////////////////////////////////////

//STRUCTURES AND FUNCTIONS FOR PRBLM5///////////////////////////////////////////
struct Prime
{
	unsigned short prime;
	unsigned char power;
};
struct Primes
{
	unsigned char nPrimes;
	Prime *prime;
};

Primes *factor(int);
void prntPrm(Primes *);
////////////////////////////////////////////////////////////////////////////////

void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do
    {
        menu();
        cin >> choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            case '6':{prblm6();break;}
            case '7':{prblm7();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }
    while(choice>='1'&&choice<='7');
    
    //Exit stage right!
    return 0;
}


void menu()
{
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;   
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<< endl;
    cout<<"Type 6 for Problem 6"<< endl;
    cout<<"Type 7 for Problem 7"<< endl << endl;
}


void prblm1()
{
    cout << "Problem 1" << endl;
    
    //INPUT CONSOLE
    cstInfo userInput;

    //STORING AND CALCULATING USER INPUT
    storeInfo(userInput);
    
    //DISPLAY RESULTS
    disInfo(userInput);
    
}


void prblm2()
{
    cout << "Problem 2" << endl;
    //DECLARING VARIABLES
    int numEmp;
    employ* infEmp;
    cout << "Please Enter Number of Employees: " << endl;
    cin >> numEmp;
    
    infEmp = userInfo(numEmp);
    disInfo(infEmp, numEmp);
    
    //DELETE DYNAMICALLY CREATED ARRAY
    delete[] infEmp;
}


void prblm3()
{
    cout << "Problem 3" <<endl;
    //Declare variables
    int arySize;//Array Size
    int modNum; //Number to control the modes (digits 0 to 9 allowed)
    Array *array;
    
    //Input the size and mod number
    cout<<"This program develops an array to be analyzed"<<endl;
    cout<<"Array size from mod number to 100"<<endl;
    cout<<"Mod number from 2 to 10"<<endl;
    cout<<"Input the Array Size and the mod number to be used."<<endl;
    cin>>arySize>>modNum;
    cout<<endl<<endl;
    
    //Fill the array
    array=fillAry(arySize,modNum);
    
    //Print the initial array
    cout<<"Original Array before sorting"<<endl;
    prntAry(array,10);
    
    //Sort the array
    mrkSort(array->data,array->size);
    cout<<"Sorted Array to be utilize for the stat function"<<endl;
    prntAry(array,10);
    
    //Calculate some of the statistics
    Stats *stats=stat(array);
    
    //Print the statistics
    prtStat(stats);
    
    //Recover allocated memory
    rcvrMem(array);
    rcvrMem(stats);
    
    //Exit stage right
}


void prblm4()
{
    cout << "Problem 4" << endl;
    //INPUT CONSOLE
    int fin;
    int userSelect;
    cout << "Would you like to encrypt or decrypt a four-digit integer?" << endl;
    cout << "Press '1' to encrypt, press '2' to decrypt: ";
    cin >> userSelect;
    
    //ENCRYPT OR DECRYPT
    while(userSelect < 1 || userSelect > 2)
    {
        cout << "Please choose either choice '1' or '2' Professor: ";
        cin >> userSelect;
    }
    switch(userSelect)
    {
        case 1:
            encrypt(fin);
            break;
        case 2:
            decrypt(fin);
            break;
    }
    
}

void prblm5()
{
    cout << "Problem 5" << endl;
    cout << "Problem 5-A: Using a byte variable, what is the largest n where";
    cout << "n!=factorial that can be calculated?" << endl;
    cout << "|---------1-Byte Variables---------|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "| char:   n = 5, n! = 120          |" << endl;
    cout << "| unsigned char: n = 5, n! = 120   | " << endl;
    cout << "|----------------------------------|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "Problem 5-B: What would be the largest factorial using short, int, long, float,"; 
    cout << "double, etc..." << endl;
    cout << "|-----Primitive Variable Types-----|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "| short:   n = 7, n! = 5,040       |" << endl;
    cout << "| unsigned short: n = 8,n! = 4.0e4 |" << endl;
    cout << "| int: n = 12, n! = 4.79e8         |" << endl;
    cout << "| unsigned int n = 12, n! = 4.79e8 |" << endl;
    cout << "| long: n = 20, n! = 2.43e18       |" << endl;
    cout << "| unsigned long: n = 20, n1 = 2.43e18 |" << endl;
    cout << "| float: n = 34, n! = 2.95e22      |" << endl;
    cout << "|------The Largest Factorial-------|" << endl;
    cout << "|(I see why you dislike doubles, now)|" << endl;
    cout << "| double: n = 303, n!= 1.78e^308     |" << endl;
}

void prblm6()
{
    cout << "Problem 6" << endl;
    cout << "-----------------------------------" << endl;
    cout << "|---Answers to Problem 6 Part A---|" << endl;
    cout << "| 2.875                           |" << endl;
    cout << "| Binary: 10.111                  |" << endl;
    cout << "| Octal: 2.7                      |" << endl;
    cout << "| Hex: 2.E                        |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "| 0.1796875                       |" << endl;
    cout << "| Binary: 0.010111                |" << endl;
    cout << "| Octal: 134                      |" << endl;
    cout << "| Hex: 0.2E                       |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "-----------------------------------" << endl;
    cout << "-----------------------------------" << endl;
    cout << "|---Answers to Problem 6 Part B---|" << endl;
    cout << "| 2.875 = B8000002                |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "| 0.1796875 = B80000F1            |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "-----------------------------------" << endl;
    cout << "|---Answers to Problem 6 Part C---|" << endl;
    cout << "| 59999901 = 2106982              |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "| 59999901 = 1058406              |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "| A66667FE = -1.49066004e-9       |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "-----------------------------------" << endl;
}

void prblm7()
{
    cout << "Problem 7" << endl;
    cout << "This problem is unfinished. Sorry :(" << endl;
    int userInput;
    
    Primes *div;
    div = factor(userInput);
    prntPrm(div);
    
    delete [] div;
}

//FUNCTIONS FOR PRBLM1//////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////

//FUNCTIONS FOR PRBLM2//////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////

//FUNCTIONS FOR PRBLM3//////////////////////////////////////////////////////////
int *copy(const int *a,int n){
    //Declare and allocate an array
    //that is a c
    int *b=new int[n];
    //Fill
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    //Return the copy
    return b;
}

void prtStat(const Stats *ary){
    cout<<endl;
    cout<<"The average of the array = "<<ary->avg<<endl;
    cout<<"The median of the array  = "<<ary->median<<endl;
    cout<<"The number of modes      = "<<
            ary->mode->size<<endl;
    cout<<"The max Frequency        = "<<
            ary->modFreq<<endl;
    if(ary->mode->size==0){
        cout<<"The mode set             = {null}"<<endl;
        return;
    }
    cout<<"The mode set             = {";
    for(int i=0;i<ary->mode->size-1;i++){
        cout<<ary->mode->data[i]<<",";
    }
    cout<<ary->mode->data[ary->mode->size-1]<<"}"<<endl;
}

void mrkSort(int *array,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

void rcvrMem(Stats *stats){
    rcvrMem(stats->mode);
    delete stats;
}

void rcvrMem(Array *array){
    delete []array->data;
    delete array;
}

void prntAry(const Array *array,int perLine){
    //Output the array
    for(int i=0;i<array->size;i++){
        cout<<array->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int n, int modNum){
    //Allocate memory
    Array *array=new Array;
    array->size=n;
    array->data=new int[array->size];
    
    //Fill the array with mod numbers
    for(int i=0;i<n;i++)
    {
        array->data[i]=i%modNum;
    }
    
    //Exit function
    return array;
}

Stats *stat(const Array *array)
{
    //Non-working stub to be completed by the student
    cout<<endl<<"Stat function now completed by the student :D"<<endl;
    Stats *stats = new Stats;
    stats->mode = new Array;
    stats->mode->size = 0;
    int nModes = 0;
    stats->mode->data = new int[nModes];
    stats->modFreq = 0;
    stats->median = 0;
    int pos = 0;

    for(int i = 0; i < array->size; i++)
    {
        stats->avg += array->data[i];
    }
    stats->avg /= array->size;
    
    for(int i = 0; i < array->size; i++)
    {
        int count = 0;

        for(int j = i; j < array->size; j++)
        {
            if(array->data[i] == array->data[j])
            {
                count++;
            }
            else
            {
                j += array->size + 1;
            }
        }

        if (stats->modFreq < count)
        {
            stats->mode->size = 1;
            stats->modFreq = count;
            stats->mode->data[0] = array->data[i];
            pos = 0;
        }
        else if(stats->modFreq == count)
        {
            pos += 1;
            stats->mode->size += 1;
            stats->mode->data[pos] = array->data[i];
        }

        i += count - 1;
    }
    if(nModes%2==0)
    {
        stats->median = (array->data[(array->size/2) + 1] + array->data[(array->size/2)]) / 2;
    }
    else
    {
        stats->median=array->data[array->size/2];
    }

    return stats;
}
////////////////////////////////////////////////////////////////////////////////

//FUNCTIONS FOR PRBLM4//////////////////////////////////////////////////////////
//ENCRYPT 4-DIGIT INTEGER
void encrypt(int fin)
{
    int num;
    int dig1, dig2, dig3, dig4;
    int temp;
    int numEcr;

    cout << "Please enter a four-digit integer: ";
    cin >> num;
    dig1 = (num / 1000 + 5) % 8;
    dig2 = (num %1000 / 100 + 5) % 8;
    dig3 = (num %1000 %100 / 10 + 5) % 8;
    dig4 = (num %1000 %1000 %10 + 5) % 8;

    temp = dig1;
    dig1 = dig3 * 1000;
    dig3 = temp * 10;
    temp = dig2;
    dig2 = dig4 * 100;
    dig4 = temp * 1;
    numEcr = dig1 + dig2 + dig3 + dig4;

    cout << "Here is your encrypted four-digit integer: ";
    cout << setfill('0') << setw(4) << numEcr;
}

//DECRYPT 4-DIGIT INTEGER
void decrypt(int fin)
{
    int num;
    int dig1, dig2, dig3, dig4;
    int temp;
    int numDcr;

    cout << "Please enter an encrypted four-digit integer: ";
    cin >> num;
    dig1 = num / 1000;
    dig2 = num %1000 / 100;
    dig3 = num %1000 %100 / 10;
    dig4 = num %1000 %1000 %10;

    temp = (dig1 + 3) %8;
    dig1 = (dig3 + 3) %8;
    dig3 = temp;
    temp = (dig2 + 3) %8;
    dig2 = (dig4 + 3) %8;
    dig4 = temp;
    numDcr = dig1 * 1000 + dig2 * 100 + dig3 * 10 + dig4;

    cout << "Here is your decrypted four-digit integer: ";
    cout << numDcr;
}
////////////////////////////////////////////////////////////////////////////////

//FUNCTIONS FOR PRBLM7//////////////////////////////////////////////////////////
Primes *factor(int num)
{
    
}

void prntPrm(Primes *prm)
{
    
}
////////////////////////////////////////////////////////////////////////////////