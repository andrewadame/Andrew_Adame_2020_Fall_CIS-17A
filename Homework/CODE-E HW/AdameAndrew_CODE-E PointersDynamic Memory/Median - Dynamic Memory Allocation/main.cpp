#include <iostream>
#include <iomanip>

int *getData(int &);         //Return the array size and the array

void prntDat(int *,int);    //Print the integer array

float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data

void prntMed(float *);     //Print the median Array

using namespace std;

int main()
{
	int arySize;
	
	int *ary = getData(arySize);        //array
	prntDat(ary, arySize);              //Print integar array
	float *flAr = median(ary, arySize); //float Array (median array)
	prntMed(flAr);
	
	delete[]flAr;
	delete[]ary;
	
	return 0;
}

int *getData(int &arySize)
{
    cin >> arySize;
    int *array = new int [arySize];
    for(int i = 0; i < arySize; i++)
    {
        cin >> array[i];
    }
return array;
}

void prntDat(int *ary, int arySize)
{
    cout << ary[0];
    for(int i = 1; i < arySize; i++)
    {
        cout << " " << ary[i];
    }
    cout << endl;
    
}

float *median(int *ary, int arySize)
{
    float *arFl = new float [arySize + 2];    //new float array 
    int num1,   //first medium number position
        num2;   //second medium number position
    float num3; //median number
    bool bub;   //bool for bubble sort
    int temp;   //temporary int for bubble sort
    
    
    arFl[0] = arySize+2;    //first element of array is array size
    
    for(int i = 0; i < arySize; i++)  //float array is filled with unsorted array ary
    {
        arFl[i + 2] = ary[i];     //starting at element 2
    }
    
    //Bubble sort
    //In order to find median the array must be sorted in order
    do
    {
        bub = false;
        for(int i = 0; i < (arySize - 1); i++)
        {
            if(ary[i] > ary[i + 1])
            {
                temp = ary[i];
                ary[i] = ary[i + 1];
                ary[i + 1] = temp;
                bub = true;
            }
        }
    } 
    while(bub);
    
    if(arySize % 2 == 0)                //if the median two number
    {
        num1 = arySize/2 - .5;          //first median position found by subtracting .5
        num2 = arySize/2 + .5;          //from size divided by two and median 2 is found 
                                        //by adding
        num3 = (ary[num1] + ary[num2]); //med3 equals the two middle numbers added
        num3 = num3 / 2;                //average is found by dividing by 2
        arFl[1] = num3;
    }
    
    else                                //if median is one number
    {
        arFl[1] = ary[arySize / 2];     //the middle number is the median
    }
    
    return arFl;
}

void prntMed(float *flAr)
{
    //outputs array size, median number and the float array
    cout << flAr[0];
    for(int i = 1; i < flAr[0]; i++)
    {
        cout << " " << setprecision(2) << fixed << flAr[i];
    }
}

