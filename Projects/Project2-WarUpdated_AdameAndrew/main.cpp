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
#include <string>
#include <ctime>        //For seed

using namespace std;

#include "card.h"
#include "deck.h"

int main(int argc, char** argv) 
{
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
    
    //INPUT NUM FOR CARDS TO DEAL
    int numOfCards = 26;
    
    //INTIALIZE RANDOM SEED
    srand(time(0));
    
    Deck deck;
    
     while (cin.get(start)) 
     {
        deck.shuffle();
        cout << "This is your hand!" << endl;
        for (int cardNum = 0; cardNum < numOfCards; cardNum++) 
        {
            Card c = deck.dlOne();  
            string suit = c.getSuit();
            string face = c.getFace();
            cout << face << suit << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}

