/* 
 * File: A2 More Test Output Format
 * Author: Andrew Adame
 * Date: 6/27/2020
 * Purpose: Create a program that matches the expected output.
 * Version: 1
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) 
{
    //DECLARING VARUABLES
    float num1;
    float num2;
    float num3;
    float num4;
    
    //CONSOLE INPUT
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    
    //OUTPUT RESULTS
    cout << fixed;
    cout << setw(9) << setprecision(0) << num1 << setw(10) << setprecision(1) << num1 << setw(10) << setprecision(2) << num1 << endl;
    cout << setw(9) << setprecision(0) << num2 << setw(10) << setprecision(1) << num2 << setw(10) << setprecision(2) << num2 << endl;
    cout << setw(9) << setprecision(0) << num3 << setw(10) << setprecision(1) << num3 << setw(10) << setprecision(2) << num3 << endl;
    cout << setw(9) << setprecision(0) << num4 << setw(10) << setprecision(1) << num4 << setw(10) << setprecision(2) << num4;
    
    return 0;
}