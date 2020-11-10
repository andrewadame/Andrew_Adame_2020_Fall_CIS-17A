
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: To display the largest n largest n where n!=factorial 
 * that can be calculated, as well as the largest factorial
 *
 * Created on October 19, 2020, 1:15 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    cout << "Problem 5-A: Using a byte variable, what is the largest n where";
    cout << "n!=factorial that can be calculated?" << endl;
    cout << "|---------1-Byte Variables---------|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "| char:   n = 5, n! = 120          |" << endl;
    cout << "| unsigned char: n = 5, n! = 120   | " << endl;
    cout << "|----------------------------------|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "Problem 5-B: What would be the largest factorial using short, int, long, float,"; 
    cout << "double, etc..." << endl;
    cout << "|-----Primitive Variable Types-----|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "| short:   n = 7, n! = 5,040       |" << endl;
    cout << "| unsigned short: n = 8,n! = 4.0e4 |" << endl;
    cout << "| int: n = 12, n! = 4.79e8         |" << endl;
    cout << "| unsigned int n = 12, n! = 4.79e8 |" << endl;
    cout << "| long: n = 20, n! = 2.43e18       |" << endl;
    cout << "| unsigned long: n = 20, n1 = 2.43e18 |" << endl;
    cout << "| float: n = 34, n! = 2.95e22      |" << endl;
    cout << "|------The Largest Factorial-------|" << endl;
    cout << "|(I see why you dislike doubles, now)|" << endl;
    cout << "| double: n = 303, n!= 1.78e^308     |" << endl;
    
    
            

    return 0;
}

