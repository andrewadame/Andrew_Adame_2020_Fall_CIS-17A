#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "card.h"
#include "deck.h"

//================================================== main
int main() {
    int numOfCards = 7; // Input number for how many cards to deal.
    int stop; //
    srand(time(0)); // Initializes random "seed".
    Deck deck;
    
    while (cin >> stop, stop > 0) {
        deck.shuffle();
        
        cout << "Your hand is: ";
        for (int cardNum=0; cardNum<numOfCards; cardNum++) {
            Card c = deck.dealOneCard();  
            string suit = c.getSuit();
            string face = c.getFace();
            cout << face << suit << " ";
        }
        cout << endl;
    }

    return 0;
}//end main