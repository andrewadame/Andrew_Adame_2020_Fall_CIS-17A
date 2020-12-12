// cardplay-1/deck.cpp
// Fred Swartz 2004-11-22, shuffle modified 2007-01-18

#include <cassert>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

#include "card.h"
#include "deck.h"

//=========================================== Constructor
Deck::Deck() {
    // Initialize the array to the ints 0-51
    for (int i=0; i<52; i++) {
        _cards[i] = Card(i);
    }
    shuffle();
    _nextCardIndex = 0;  // index of next available card
}    


//================================================== deal
//  Action    : Returns random Card.

Card Deck::dealOneCard() {
    assert(_nextCardIndex >= 0 && _nextCardIndex<52);
    return _cards[_nextCardIndex++];
}


//================================================ shuffle
//  Action    : Shuffles Deck.
//  Returns   : none.
void Deck::shuffle() {
    // Shuffle by exchanging each element randomly
    for (int i=0; i<(52-1); i++) {
        int randnum = i + (rand() % (52-i));
        swap(_cards[i], _cards[randnum]);
    }
    _nextCardIndex = 0;
}