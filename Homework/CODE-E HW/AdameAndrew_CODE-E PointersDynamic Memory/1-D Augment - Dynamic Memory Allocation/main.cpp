/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT #6  : 1-D Augment - Dynamic Memory Allocation
* CLASS          : CSC-17A
* SECTION        : MW 2:20PM - 5:30PM
* DUE DATE       : 06/01/2020
 ************************************************************************/
 
#include <iostream>

using namespace std;

//FUNCTION PROTOTYPES
int *getData(int &);
int *augment(const int *,int);
void prntAry(const int *,int);

int main()
{
    //DECLARING VARIAVLES
    int SIZE;
    int *array, *AUG;

    array = getData(SIZE);
    AUG = augment(array, SIZE);

    prntAry(array, SIZE);
    prntAry(AUG, SIZE + 1);
    return 0;
}

//FUNCTION - GATHERING DATA
int *getData(int &length){

    cin >> length;

    int *arr = new int[length];

    for(int i = 0; i < length; i++)
    {
        cin >> *(arr + i);
    }

    return arr;

}

//FUNCTION - AUGMENTING LENGTH
int *augment(const int *arr, int len)
{
    int newLen = len + 1;
    int *AUG = new int[newLen];

    *(AUG+0) = 0;

    for(int i = 0; i < len; i++)
    {
        *(AUG+(i+1)) = *(arr+i);
    }

    return AUG;
}

//FUNCTION - PRINT ARRAY
void prntAry(const int *arr, int SIZE)
{

    static int count = 0;
    for(int i = 0; i < SIZE - 1; i++){

        cout << *(arr + i) << " ";
    }

    cout << *(arr + SIZE - 1);

    if(count == 0)
    cout << endl;

    count++;
}