/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   card.h
 * Author: andre
 *
 * Created on December 11, 2020, 12:52 PM
 */

#ifndef CARD_H
#define CARD_H

class Card 
{
    public:
        Card();
        Card(int card);
        string getSuit() const;
        string getFace() const;
       
    private:
        int card; 

        static const string cardFce[];
        static const string cardSt[];
};  


#endif /* CARD_H */

