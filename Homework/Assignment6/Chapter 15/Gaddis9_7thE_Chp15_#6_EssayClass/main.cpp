/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: andre
 *
 * Created on November 30, 2020, 12:53 PM
 */

#include <iostream>
#include <iomanip>
#include "Essay.h"
#include "GradedActivity.cpp"

using namespace std;

int main()
{
    //create default Essay object object
    cout << "Now creating default Essay object...\n";
    Essay ess;
    cout << "Done!\n";


    cout << "\nNow displaying score...\n";
    cout << "Score: " << ess.getScore();
    cout << "\nDone!\n";

    int points;
    cout << "\nNow setting points for each category...";
    cout << "\nEnter grammar points: ";
    cin >> points;
    ess.setGrammar(points);

    cout << "\nEnter spelling points: ";
    cin >> points;
    ess.setSpelling(points);

    cout << "\nEnter correct length points: ";
    cin >> points;
    ess.setLength(points);

    cout << "\nEnter content points: ";
    cin >> points;
    ess.setContent(points);
    cout << "Done!\n";

    cout << "\nNow displaying score again...\n";
    cout << "Score: " << ess.getScore();
    cout << "\nDone!\n";

    cout << "Letter grade: " << ess.getLetterGrade() << endl;

    return 0;
}
