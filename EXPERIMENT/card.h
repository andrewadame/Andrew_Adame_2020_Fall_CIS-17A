// cardplay-1/card.h
// Fred Swartz 2004-11-22
#ifndef CARD_H
#define CARD_H

class Card {
    public:
        Card();
        Card(int card);
        string getSuit() const;
        string getFace() const;
       
    private:
        int _card;  // range 0..51

        static const string CARD_FACES[];
        static const string CARD_SUITS[];
};  

#endif