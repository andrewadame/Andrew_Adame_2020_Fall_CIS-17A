/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework Review
* CLASS          : CIS-17A
* SECTION        : Chapter 8
* DUE DATE       : 09/07/2020
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

//FUNCTION PROTOTYPE
void stringSort(string names[], int arraySize);
bool binarySearchString(const string names[], string searchName, int arraySize);

int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    const int numNames = 20;
    string names[numNames] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" };

    //OUTPUT RESULTS
    stringSort(names, numNames);
    string searchName;
    cout << "Enter the name to search:\n";
    getline(cin, searchName);
    if(binarySearchString(names, searchName, numNames))
        cout << searchName << " was found in list!\n";
    else
        cout << searchName << " was not found!\n";

    return 0;
}

//FUNCTION - Sort String for Binary Search
void stringSort(string names[], int arraySize){
    int startScan, minIndex;
    string minName;

    for(startScan = 0; startScan < arraySize-1; startScan++)
    {
        minName = names[startScan];
        minIndex = startScan;
        for(int index = startScan+1; index < arraySize; index++)
        {
            if(names[index] < minName)
            {
                minName = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[startScan];
        names[startScan] = minName;
    }
}

//FUNCTION Search String using Binary Method
bool binarySearchString(const string names[], string searchName, int arraySize)
{
    int first = 0,
        last = arraySize-1,
        middle;
    while(first <= last)
    {
        middle = (first + last) / 2;
        if(names[middle] == searchName)
        {
            return true;
        }
        else if(names[middle] > searchName)
        {
            last = middle - 1;
        }
        else if(names[middle] < searchName)
        {
            first = middle + 1;
        }
    }
    return false;
}