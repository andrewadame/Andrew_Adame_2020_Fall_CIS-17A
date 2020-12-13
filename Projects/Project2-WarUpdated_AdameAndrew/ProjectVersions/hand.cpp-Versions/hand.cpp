/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "hand.h"
#include <ctime>
#include <cstdlib>

hand::hand()
{
}

hand hand::totalDeck()
{
    hand deck;
    
    const int numSt = 4;
    const int numFce = 13;
    
    Card cardSt[numSt];
    Card cardFce[numFce];
    
    for(int i = 0; i < numSt; i++)
    {
        for(int j = 0; j < numFce; j++)
        {
            deck.plcBtm(Card(cardSt[j], cardFce[j]));
        }
    }
    return deck;
}

void hand::shuffle()
{
    srand(time(0) + size());
    
    for(int i = 0; i < size(); i++)
    {
        int newIdx = rand()%size();
        Card.insert(Card.begin() + newIdx, Card.at(i));
    }
}
