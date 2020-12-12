
// cardplay-1/card.cpp
// Fred Swartz 2004-11-22

#include <string>
using namespace std;

#include "card.h"

//================================================= static constants
const string Card::CARD_FACES[] =  {"A", "2", "3", "4", "5", "6", "7"
                                    , "8", "9", "10", "J", "Q", "K"};
const string Card::CARD_SUITS[] = {"S", "H", "C", "D"};



//================================================= Constructor
Card::Card() {
    _card = 0;  // TODO: Should initialize to Joker.
}    


//================================================= Constructor
Card::Card(int card) {
    _card = card;
}    
    

//================================================== getFace
//  Action    : Returns face value of card.
//  Returns   : a string representing card face: "A", "2", ...

string Card::getFace() const {
    return CARD_FACES[_card%13];
}//end getFace


//================================================== getSuit
//  Action    : Returns suit of a card value.
//  Returns   : a string "S" (Spades), "H", (Hearts),
//                       "C" (Clubs), or "D" (Diamonds).

string Card::getSuit() const { 
    return CARD_SUITS[_card/13];
}//end getSuit