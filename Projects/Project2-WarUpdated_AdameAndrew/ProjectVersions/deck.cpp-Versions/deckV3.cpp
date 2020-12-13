/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

#include "card.h"
#include "deck.h"

//CONSTRUCTOR
Deck::Deck() 
{
    //INITIALIZE A$RAY
    for (int i = 0; i < 52; i++) 
    {
        totalCrd[i] = Card(i);
    }
    shuffle();
    nxtCrdIndx = 0;  //INDEX FOR NEXT CARDS
}

//SHUFFLE CARD
void Deck::shuffle() 
{
    //SHUFFLE BY EXCHANING ELEMENTS RANDOMLY
    for (int i = 0; i < (52-1); i++) 
    {
        int randnum = i + (rand() % (52-i));
        swap(totalCrd[i], totalCrd[randnum]);
    }
    nxtCrdIndx = 0;
}