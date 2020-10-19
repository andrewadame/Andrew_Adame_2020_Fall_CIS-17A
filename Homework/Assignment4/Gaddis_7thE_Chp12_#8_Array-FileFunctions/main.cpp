
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: Using functions to write to, read data of, and display contents
 * of the a binary file.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void arrayToFile(string, int *, int);
void fileToArray(string, int *, int);

int main(int argc, char** argv) 
{
    //ARRAY SIZE
    const int size = 10;
    
    //DECLARING ARRAY TO FILE
    int arrayToWrite[size] = 
    {
        1,2,3,4,5,6,7,8,9,10
    };
    
    //DECLARING ARRAY FROM FILE
    int arrayFromFile[size];
    
    //WRITING TO FILE
    cout << "Writing into file..." << endl;
    arrayToFile("binary.txt", arrayToWrite, sizeof(arrayToWrite));
    cout << "Done!" << endl;
    
    //READING FROM FILE
    cout << "Reading from file..." << endl;
    fileToArray("binary.txt", arrayFromFile, sizeof(arrayToWrite));
    cout << "Done!" << endl;
    
    //DISPLAY ARRAY FROM FILE
    cout << "This is what was read from file:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arrayFromFile[i] << endl;
    }

    return 0;
}

void arrayToFile(string fileName, int *inputAr, int sizeAr)
{
    //OPEN FILE
    ofstream outputFile(fileName, ios::binary);
    
    //WRITE TO FILE
    outputFile.write(reinterpret_cast<char *>(inputAr), sizeAr);
    
    //CLOSE FILE
    outputFile.close();
}

void fileToArray(string fileName, int *outputAr, int sizeAr)
{
    //OPEN FILE
    ifstream inputFile(fileName, ios::binary);

    //READ FROM FILE
    inputFile.read(reinterpret_cast<char *>(outputAr), sizeAr);

    //CLOSE FILE
    inputFile.close();
}

