/* 
 * File: Company Division
 * Author: Andrew Adame
 * Created on 10/8/2020
 * Purpose:  Calculate the Quarter, Annual, and Average Quarterly Sales of the company's four divisions
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
struct compSales
{
    //DECLARING VARIABLES
    string divNames;
    int qrtSales[4];
    int annSales;
    int avgQSales;
};

//FUNCTIONS
void storeInfo(compSales&);
void disInfo(const compSales);

//Execution Begins Here
int main(int argc, char** argv) 
{
    //INPUT SALES
    compSales n = {"North"};
    compSales w = {"West"};
    compSales e = {"East"};
    compSales s = {"South"};
    
    //STORING INPUT AND DISPLAY RESULTS
    storeInfo(n);
    disInfo(n);
    
    storeInfo(w);
    disInfo(w);
    
    storeInfo(e);
    disInfo(e);
    
    storeInfo(s);
    disInfo(s);
    
    
    return 0;
}

//STORE INFO
void storeInfo(compSales& s)
{
    s.annSales = 0;
    s.avgQSales = 0;
    
    cout << s.divNames << endl;
    
    //QUARTER SALES ORDER
    const string qrtOrder[4] =
    {
        "first", "second", "third", "fourth"
    };
    
    //USER INPUT
    for(int i = 0; i < 4; i++)
    {
        cout << "Enter " << qrtOrder[i] << "-quarter sales:" << endl;
        cin >> s.qrtSales[i];
        
        s.annSales += s.qrtSales[i];
    }
    
    //CAKCULATE AVERAFE 
    s.avgQSales = s.annSales/4;
    
}

void disInfo(const compSales s)
{
    cout << "Total Annual sales: " << s.annSales << endl;
    cout << "Average Quarterly Sales: " << s.avgQSales << endl;
}



