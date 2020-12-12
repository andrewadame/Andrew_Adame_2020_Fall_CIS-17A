
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 *
 * Created on November 12, 2020, 1:15 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//CLASS FOR NUMBER TRANSLATION
class num{
private:
    int NUM;
    static string lt20[20];
    static string hdth;
    static string thdth;
    static string tnth[8];
    
public:
    //CONSTRUCTOR
    num(int i)
    {
        NUM = i;
    }
    
    //PRINT MEMBER
    void prnt()
    {
       while(NUM > 0)
       {
           
           //CHECK FOR THOUSANDS
           if(NUM/1000 > 0)
           {
               cout << lt20[NUM/1000] << " " << thdth << " ";
               NUM = NUM % 1000;
           }
           
           //CHECK FOR HUNDREDS
           else if(NUM/100 > 0)
           {
               cout << lt20[NUM/100] << " " << hdth << " ";
               NUM = NUM % 100;
           }
           
           //CHECK FOR TENS
           else if(NUM >= 20)
           {
               cout << tnth[(NUM/10) - 2] << " ";
               NUM = NUM % 10;
           }
           
           //CHECK FOR ONES
           else
           {
               cout << lt20[NUM];
               
               //END LOOP
               break;
           }
       }
    }
    
};

string num::lt20[20] = 
{
"zero", "one", "two", "three", "four",
"five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", 
"thirteen", "fourteen","fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};

string num::hdth = "hundred";
string num::thdth = "thousand";
string num::tnth[8] = 
{
"twenty", "thirty", "forty", "fifty", "sixty", "seventy",
"eighty", "ninety"
};

int main(int argc, char** argv) 
{
    //DECLARING INPUT
    int userInput;
    cout << "Enter a number between 0-9999" << endl;
    cin >> userInput;
    
    //CHECK VALIDATION
    while(userInput < 0)
    {
        cout << "Enter a POSITIVE number: " << endl;
        cin >> userInput;
    }
    while(userInput > 9999)
    {
        cout << "Enter a number UNDER 9999: " << endl;
        cin >> userInput;
    }
    
    //NUM OBJECT W/ USERINPUT
    num obj(userInput);
    
    //DISPLAY RESULTS
    obj.prnt();

    return 0;
}

