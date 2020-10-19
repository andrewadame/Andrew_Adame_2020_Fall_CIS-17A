/* 
 * File: Modified Challenge 4
 * Author: Andrew Adame 
 * Created on 10/11/2020
 * Purpose: Take 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
struct weatherInf
{
    float totalRn;
    float hTemp;
    float lTemp;
    float avgTemp;
    
};

//Function Prototypes
void storeInfo(weatherInf*, int);
void disInfSt(float, float, float, float);

//Execution Begins Here
int main(int argc, char** argv) 
{
    //INITIALIZE LIST
    int mon = 6;
    
    //STORING INPUT AND DISPLAY RESULTS
    float avgRnfll;
    float Htemp;
    float Ltemp;
    float Avgtemp;
    weatherInf rInfo[mon];
    
    for(int i = 0; i < mon; i++)
    {
        storeInfo(rInfo, i);
    }
    
    for(int i = 0; i < mon; i++)
    {
        avgRnfll += rInfo[i].totalRn;
    }
    avgRnfll /= mon;
    
    Htemp = rInfo[0].hTemp;
    Ltemp = rInfo[0].lTemp;
    
    for(int i = 1; i < mon; i++)
    {
        if(rInfo[i].hTemp > Htemp)
        {
            Htemp = rInfo[i].hTemp;
        }
    }
    
    for(int i = 1; i < mon; i++)
    {
        if(rInfo[i].lTemp < Ltemp)
        {
            Ltemp = rInfo[i].lTemp;
        }
    }
    
    for(int i = 0; i < mon; i++)
    {
        Avgtemp += rInfo[i].avgTemp;
    }
    
    Avgtemp /= mon;
    
    disInfSt(avgRnfll, Htemp, Ltemp, Avgtemp);
    
    return 0;
}

void storeInfo(weatherInf* r, int i)
{
    //USER INPUT
    r[i].avgTemp = 0;
    
    cout << "Enter the total rainfall for the month:" << endl;
    cin >> r[i].totalRn;
    cout << "Enter the high temp:" << endl;
    cin >> r[i].hTemp;
    cout << "Enter the low temp:" << endl;
    cin >> r[i].lTemp;
    r[i].avgTemp = (r[i].lTemp + r[i].hTemp)/2;
}

void disInfSt(float avg, float hi, float lo, float at)
{
    cout << "Average monthly rainfall:" << avg << endl;
    cout << "High Temp:" << hi << endl;
    cout << "Low Temp:" << lo << endl;
    cout << "Average Temp:" << at;
}
