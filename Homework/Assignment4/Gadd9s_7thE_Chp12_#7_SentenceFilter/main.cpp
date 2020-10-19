
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: To read input file, capitalize first letter in sentence
 * and lowercase any letters not the first letter of the sentence.
 * The output to output file.
 * 
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    //VARIABLE DECLERATION
    string inputName;
    string outputName;

    string sent;
    char ch;

    //CONSOLE INPUT
    cout << "Enter input file name:\n";
    cin >> inputName;
    cout << "Enter output file name:\n";
    cin >> outputName;
    cin.ignore();

    //DEFINE AND OPEN
    ifstream inputFile(inputName);
    ofstream outputFile(outputName);

    //VALIDATION
    if(!inputFile && !outputFile)
    {
        cout << "Error; Could Not Open File!" << endl;
        cout << "Please Try Again!" << endl;
        return 0;
    }

    while(getline(inputFile, sent, '.'))
    {
        //ALREADY CAPITALIZED FIRST LETTER
        bool alCapFrst = false;

        for(int i = 0; i < sent.length(); i++)
        {
            //NON-ALPHABETIC CHARACTER
            if(!isalpha(sent[i]))
            {
                outputFile << sent[i];
            }

            //CAPITALIZE FIRST LETTER
            if(!alCapFrst && isalpha(sent[i]))
            {
                outputFile << (char)toupper(sent[i]);
                alCapFrst = true;
            }

            //LOWERCASE BEYOND FIRST
            else if(alCapFrst)
            {
                outputFile << (char)tolower(sent[i]);
            }
        }
        //ADD PERIOD
        outputFile << ".";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
