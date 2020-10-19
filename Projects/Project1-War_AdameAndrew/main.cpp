/* 
 * File:   main.cpp
 * Author: Andrew Adame
 * Purpose: The purpose of this program is to simulate
 * the card game "War" using a variety of things I have learned
 * in CSC-17A so far such as structures and dynamic arrays.
 *
 * Created on October 13, 2020, 9:17 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

struct decks
{
    int rank;           //Rank of Card
    int suit[4];         //Suit of Card
    int deckTotal [52]; //Total Deck Array
    int s [13];         //Suit Array
};
       
void deckInt(decks&);
void disDeck(decks&);
int main(int argc, char** argv) 
{
    decks d[13];
    decks h[13];
    decks c[13];
    decks s[13];
    char tutorial;
    char start;
    cout << "Welcome to Andrew's Game of War!" << endl;
    cout << "________________________________" << endl;
    cout << "Press 'ENTER' to read the tutorial!";
    cin.get(tutorial);
    
    cout << "Here are the rules:" << endl;
    cout << "_________________________________________________________________________________________________________________" << endl;
    cout << "You will be facing off against the computer." << endl;
    cout << "Each of you will split the deck, and receive ";
    cout << "26 cards, none of which you or your opponent are allowed to see." << endl;
    cout << "When the game starts, you and your opponent will draw a card." << endl;
    cout << "The program will directly inform you the card's rank and suit." << endl;
    cout << "(Although in this game, only your card's rank matters)" << endl;
    cout << "When you and your opponent's cards are displayed, whoever has the highest value card" << endl;
    cout << "will win the round and lose their card, while the loser gains both cards in their deck." << endl;
    cout << "(Order of value goes like so; 2,3,4,5,6,7,8,9,10, Jack, Queen, King, Ace)" << endl;
    cout << "The objective of the game is to run out of cards in your deck." << endl;
    cout << "If both you and your opponent draws the same rank card, the two " << endl;
    cout << "of you will enter a state of WAR!" << endl;
    cout << "The program will draw three cards from each of your decks, and only display the face/value of the third card." << endl;
    cout << "Whoever has the highest rank card will lose the three cards, and the loser will gain all six." << endl;
    cout << "If you and your opponent tie again, this process will repeat until one of you eventually loses." << endl;
    cout << "_________________________________________________________________________________________________________________" << endl;
    cout << "Press 'ENTER' to start!" << endl;
    cin.get(start);
    
    deckInt(d[13]);
    disDeck(d[13]);
    
    deckInt(h[13]);
    disDeck(h[13]);
    
    deckInt(c[13]);
    disDeck(c[13]);
    
    deckInt(s[13]);
    disDeck(s[13]);
    
    return 0;
}

//INITIALIZING DECK
void deckInt(decks& d)
{
   // d.suit[0];
    d.rank = 1;
    d.s[0];
    
    for(int i = 0; i <= 13; i++)
    {
        d.s[i] = d.rank++;
    }
    
}

void disDeck(decks& d)
{
    for(int i = 0; i <= 12; i++)
    {
        /*
        switch(d.suit[i])
        {
            case 1:
                cout << "Diamonds" << endl;
                break;
            case 2:
                cout << "Hearts" << endl;
                break;
            case 3:
                cout << "Clubs" << endl;
                break;
            case 4:
                cout << "Spades" << endl;
        */
        
        switch(d.s[i])
        {
            case 1: 
                cout << "Ace = "; 
                break;
            case 11:
                cout << "Jack = ";
                break;
            case 12:
                cout << "Queen = ";
                break;
            case 13:
                cout << "King = ";
                break;
        }
        cout << d.s[i] << endl;
    }
    
    cout << endl;
}