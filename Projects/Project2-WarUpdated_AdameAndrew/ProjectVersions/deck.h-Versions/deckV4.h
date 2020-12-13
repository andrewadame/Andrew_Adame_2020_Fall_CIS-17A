/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   deck.h
 * Author: andre
 *
 * Created on December 10, 2020, 11:06 AM
 */

#ifndef DECK_H
#define DECK_H

class Deck
{
public:
    Deck();
    void shuffle();
    
private:
    Card totalCrd[52];
    int nxtCrdIndx;
    
};


#endif /* DECK_H */

