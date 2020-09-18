/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Sorting an array of characters if specified correctly
 */

//System Libraries Here
#include <iostream>//cout,cin
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int  read(char []);
void sort(char [],int);
void print(const char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare all Variables Here
    const int SIZE = 80;//Larger than needed
    char array[SIZE]; //Character array larger than needed
    int sizeIn;
    int sizeDet;//Number of characters to be read, check against length
    
    //Input the size of the array you are sorting
    cout << "Read in a 1 dimensional array of characters and sort" << endl;
    cout << "Input the array size where size <= 20" << endl;
    cin >> sizeIn;
    
    //Now read in the array of characters and determine it's size
    cout << "Now read the Array" << endl;
    sizeDet = read(array);//Determine it's size
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size to sort
    if(sizeDet == sizeIn)
    {
        sort(array, sizeIn); //Sort the array
        print(array, sizeIn);//Print the array
        cout << endl;
    }
    else
    {
        cout << (sizeDet < sizeIn? "Input size less than specified.":
            "Input size greater than specified.") << endl;
    }
    
    //Exit
    return 0;
}


//FUNCTION - Read Array
int read(char array[])
{
    cin.ignore();
    int amount;
    cin >> array;
    amount = strlen(array);
    
    return amount;
}

//FUNCTION - Sort Array
void sort(char array[], int sizeIn)
{
    int startScan, minIndex, minValue;
    
    for (startScan = 0; startScan < (sizeIn - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan + 1; index < sizeIn; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

//FUNCTION - Print Array
void print(const char array[], int sizeIn)
{
    for(int i = 0; i < sizeIn; i++)
    {
    cout << *(array + i);
    }
}