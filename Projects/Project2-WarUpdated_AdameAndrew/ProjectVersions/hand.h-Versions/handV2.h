/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hand.h
 * Author: andre
 *
 * Created on December 12, 2020, 11:03 AM
 */

#ifndef HAND_H
#define HAND_H

#include <vector>
#include "card.h"

using std::vector;

class hand
{
public:
    //DEFAULT CONSTRUCTOR
    static hand totalDeck();
    void shuffle();
    
    //DRAW CARDS TO HAND
    Card drwTp();
    Card drwBtm();
    
    //REMOVES CARD FROM HAND
    void plcTp(Card c);
    void plcBtm(Card c);
    
    //PLACE BOTTOM OR TOP
    bool empty();
    
    int size();
    
private:
    vector<Card> crds;
    
};

#endif /* HAND_H */

