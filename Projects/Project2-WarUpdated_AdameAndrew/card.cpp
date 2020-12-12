/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string>
using namespace std;

#include "card.h"

const string Card::cardFce[] =  {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                                "J", "Q", "K"};
const string Card::cardSt[] = {"S", "H", "C", "D"};

//CONSTRUCTOR
Card::Card() 
{
    card = 0;  //INITIALIZE
}    

Card::Card(int CARD) 
{
    card = CARD;
}    

//GET FACE OF CARD
string Card::getFace() const
{
    return cardFce[card%13];
}


//GET SUIT
string Card::getSuit() const
{ 
    return cardSt[card/13];
}