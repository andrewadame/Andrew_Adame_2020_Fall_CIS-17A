
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: To write the information of a Company's sales to 
 * a binary file.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
//Structure
struct compSales
{
    //DECLARING VARIABLES
    string divNames;
    float qrtSales[4];
};

//FUNCTIONS
void storeInfo(compSales&);
void disInfo(const compSales);

int main(int argc, char** argv) 
{
    //INITIALIZE LIST
    compSales n = {"North"};
    compSales w = {"West"};
    compSales e = {"East"};
    compSales s = {"South"};
    
    //STORING INPUT AND DISPLAY RESULTS
    fstream of;
    //Clear QrtSales.txt
    of.open("QrtrSales.txt", ios::out);
    //Apply to QrtSales.txt
    of.open("QrtrSales.txt", ios::app); 
    
    storeInfo(n);
    disInfo(n);
    cout << endl;
    
    storeInfo(w);
    disInfo(w);
    cout << endl;
    
    storeInfo(e);
    disInfo(e);
    cout << endl;
    
    storeInfo(s);
    disInfo(s);
    
    of.close();
    
    return 0;
}

//STORE INFO
void storeInfo(compSales& s)
{
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
        while(s.qrtSales < 0)
        {
            cout << "Please enter a number greater than or equal to 0!\n";
            cin >> s.qrtSales[i];
        }
    }
    
}

//DISPLAY INFO
void disInfo(const compSales s)
{
    fstream of;
    of.open("QrtrSales.txt", ios::app);   

    of << "Quarterly Sales for " << s.divNames << endl;       
    for(int i = 1; i < 5; i++)
    {
        of << "Quarter " << i << " Sales: ";
        of << s.qrtSales[i-1] << endl;                 
    }
    of << endl;
}

