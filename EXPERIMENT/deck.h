// cardplay-1/deck.h
// Fred Swartz 2004-11-22
#ifndef DECK_H
#define DECK_H

class Deck {
    public:
        Deck();
        Card dealOneCard();
        void shuffle();
        
    private:
        Card _cards[52];
        int  _nextCardIndex;
};    

#endif