
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 *
 * Created on November 12, 2020, 6:06 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class numDays
{
private:
    float hrs;
    float dys;
    
public:
    numDays(float h = 0)
    {
        hrs = h;
        dys = h/(8);
    }
    
    //GETTER FUNCTIONS
    float getHrs()
    {
        return hrs;
    }

    float getDys()
    {
        return dys;
    }

    //SETTER FUNCTIONS
    void setHours(double h)
    {
        hrs = h;
        dys = h/(8.00);
    }

    void setDays(double d)
    {
        dys = d;
        hrs = d*(8.00);
    }
    
    //OVERLOADED + OPERATOR
    float operator+(const numDays &right)
    {
        return hrs = right.hrs;
    }
    
    //OVERLOAD - OPERATOR
    float operator- (const numDays &right)
    {
        return hrs - right.hrs;
    }
    
    //OVERLOADED PREFIX ++
    numDays operator++()
    {
        ++hrs;
        dys = hrs/(8.00);
        return *this;
    }

    //OVERLOADED POSTFIX ++
    numDays operator++(int)
    {
        hrs++;
        dys = hrs/(8.00);
        return *this;
    }

    //OVERLOAD PREFIX --
    numDays operator--()
    {
        --hrs;
        dys = hrs/(8.00);
        return *this;
    }

    //OVERLOADED POSTFIX--
    numDays operator--(int)
    {
        hrs--;
        dys = hrs/(8.00);
        return *this;
    }
};

int main(int argc, char** argv) 
{
    //FIRST OBJECT
    cout << "Creating object with 12 hours..." << endl;
    numDays obj1(12);
    cout << obj1.getHrs() << " hours = " << obj1.getDys() << " days." << endl;

    //SECOND OBJECT
    cout << "Creating object with 18 hours..." << endl;
    numDays obj2(18);
    cout << obj2.getHrs() << " hours = " << obj2.getDys() << " days." << endl;

    //OVERLOAD +OPERATOR
    cout << endl << "Adding hours... " << obj1 + obj2 << " hours." << endl;

    //OVERLOAD -OPERATOR
    cout << endl << "Subtracting hours... " << obj2 - obj1 << " hours." << endl;

    //OVERLOAD ++ OPERATOR
    cout << "Pre- and post-incrementing first object..." << endl;
    ++obj1;
    cout << obj1.getHrs() << " hours = " <<obj1.getDys() << " days." << endl;

    obj1++;
    cout << obj1.getHrs() << " hours = " <<obj1.getDys() << " days." << endl;

    //OVERLOAD -- OPERTATOR
    cout << "\nPre- and post-decrementing second object..." << endl;
    --obj2;
    cout << obj2.getHrs() << " hours = " <<obj2.getDys() << " days." << endl;

    obj2--;
    cout << obj2.getHrs() << " hours = " <<obj2.getDys() << " days." << endl;

    
    return 0;
}

