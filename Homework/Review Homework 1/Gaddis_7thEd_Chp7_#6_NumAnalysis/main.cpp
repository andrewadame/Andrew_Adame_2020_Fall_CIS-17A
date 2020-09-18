/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework Review
* CLASS          : CIS-17A
* SECTION        : Chapter 7
* DUE DATE       : 09/07/2020
 ************************************************************************/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//FUNCTION PROTOTYPES
int getSum(vector<int>, int);
int getHighest(vector<int>, int);
int getLowest(vector<int>, int);

int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    vector<int> array;
    int count = 0;
    string userInput;
    int fileNum;
    int total;

    //CONSOLE INPUT
    cout << "Please Enter File Name ('numbers.txt'): ";
    getline(cin,userInput);

    //CALLING FILE
    ifstream inputFile(userInput);

    //IF FILE IS NOT FOUND/MISSING
    if (!inputFile)
    {
        cout << "ERROR: File Not Found" << endl;
        return 0;
    }

    //READING FILE TO ARRAY
    while (inputFile >> fileNum)
    {
        array.push_back(fileNum);
        ++count;
    }

    //OUTPUT RESULTS
    total = getSum(array, count);
    cout << "The Sum of the Values: ";
    cout << total << endl;
    
    cout << "The Highest Value: ";
    cout << getHighest(array, count) << endl;
    
    cout << "The Lowest Value: ";
    cout << getLowest(array, count) << endl;
    
    cout << "The Average of the Values: ";
    cout << total/count;

    return 0;
}

//GETTING THE SUM
int getSum(vector<int> array, int count)
{
    int total;
    for(int i=0; i < count; ++i)
        total += array[i];
    return total;
}

//GETTING THE HIGHEST
int getHighest(vector<int> array, int count)
{
    int highest = array[0];
    for(int i = 1; i < count; i++)
    {
        if(highest < array[i])
        {
            highest = array[i];
        }
    }
    return highest;
}

//GETTING THE LOWEST
int getLowest(vector<int> array, int count)
{
    int lowest = array[0];
    for(int i = 1; i < count; i++)
    {
        if(lowest > array[i])
        {
            lowest = array[i];
        }
    }
    return lowest;
}