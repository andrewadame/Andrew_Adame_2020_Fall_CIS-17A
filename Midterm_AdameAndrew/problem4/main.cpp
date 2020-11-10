
/*
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: To encrypt or decrypt a four-digit integer and vice versa.
 * NOTE: I hope it isn't an issue I placed my problem 4 programs in the same
 * project :)
 *
 * Created on October 19, 2020, 1:10 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * NOTE: I hope it isn't an issue I placed my problem 4 programs in the same
 * project :)
 */

//FUNCTIONS
void encrypt(int);
void decrypt(int);

int main(int argc, char** argv) 
{
    //INPUT CONSOLE
    int fin;
    int userSelect;
    cout << "Would you like to encrypt or decrypt a four-digit integer?" << endl;
    cout << "Press '1' to encrypt, press '2' to decrypt: ";
    cin >> userSelect;
    
    //ENCRYPT OR DECRYPT
    while(userSelect < 1 || userSelect > 2)
    {
        cout << "Please choose either choice '1' or '2' Professor: ";
        cin >> userSelect;
    }
    switch(userSelect)
    {
        case 1:
            encrypt(fin);
            break;
        case 2:
            decrypt(fin);
            break;
    }
    

    return 0;
}

//ENCRYPT 4-DIGIT INTEGER
void encrypt(int fin)
{
    int num;
    int dig1, dig2, dig3, dig4;
    int temp;
    int numEcr;

    cout << "Please enter a four-digit integer: ";
    cin >> num;
    dig1 = (num / 1000 + 5) % 8;
    dig2 = (num %1000 / 100 + 5) % 8;
    dig3 = (num %1000 %100 / 10 + 5) % 8;
    dig4 = (num %1000 %1000 %10 + 5) % 8;

    temp = dig1;
    dig1 = dig3 * 1000;
    dig3 = temp * 10;
    temp = dig2;
    dig2 = dig4 * 100;
    dig4 = temp * 1;
    numEcr = dig1 + dig2 + dig3 + dig4;

    cout << "Here is your encrypted four-digit integer: ";
    cout << setfill('0') << setw(4) << numEcr;
}

//DECRYPT 4-DIGIT INTEGER
void decrypt(int fin)
{
    int num;
    int dig1, dig2, dig3, dig4;
    int temp;
    int numDcr;

    cout << "Please enter an encrypted four-digit integer: ";
    cin >> num;
    dig1 = num / 1000;
    dig2 = num %1000 / 100;
    dig3 = num %1000 %100 / 10;
    dig4 = num %1000 %1000 %10;

    temp = (dig1 + 3) %8;
    dig1 = (dig3 + 3) %8;
    dig3 = temp;
    temp = (dig2 + 3) %8;
    dig2 = (dig4 + 3) %8;
    dig4 = temp;
    numDcr = dig1 * 1000 + dig2 * 100 + dig3 * 10 + dig4;

    cout << "Here is your decrypted four-digit integer: ";
    cout << numDcr;
}

