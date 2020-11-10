
/* 
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: To factor an input integer into it's prime numbers.
 *
 * Created on October 19, 2020, 1:18 PM
 */

#include <cstdlib>
#include <iostream>

struct Prime
{
	unsigned short prime;
	unsigned char power;
};
struct Primes
{
	unsigned char nPrimes;
	Prime *prime;
};

Primes *factor(int);
void prntPrm(Primes *);

using namespace std;

int main(int argc, char** argv) 
{
    int userInput;
    
    Primes *div;
    div = factor(userInput);
    prntPrm(div);
    
    delete [] div;
    return 0;
}

Primes *factor(int num)
{
    
}

void prntPrm(Primes *prm)
{
    
}