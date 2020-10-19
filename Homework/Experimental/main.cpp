//
//	WAR card game
//
//	Described in Chapter 2 of
//	Data Structures in C++ using the STL
//	Published by Addison-Wesley, 1997
//	Written by Tim Budd, budd@cs.orst.edu
//	Oregon State University
//

# include <iostream.h>
# include <algo.h>

enum suits {diamond, club, heart, spade};

class Card {
public:
		// constructors
	Card	( );            // initialize a card with default values
	Card	(suits, int);   // initialize a card with given values

		// data fields
	int  	rank;           // hold rank of card
	suits	suit;           // hold suit of card
};

Card::Card	( )
	// initialize a new Card
	// default value is the ace of spades
{
	rank = 1;
	suit = spade;
}

Card::Card 	(suits sv, int rv)
	// initialize a new Card using the argument values
{
	rank = rv;
	suit = sv;
}

ostream & operator << (ostream & out, Card & aCard)
	// output a textual representation of a Card
{
		// first output rank
	switch (aCard.rank) {
		case 1:  out << "Ace";   break;
		case 11: out << "Jack";  break;
		case 12: out << "Queen"; break;
		case 13: out << "King";  break;
		default:	// output number
			out << aCard.rank; break;
		}

		// then output suit
	switch (aCard.suit) {
		case diamond: out << " of Diamonds"; break;
		case spade:   out << " of Spades";   break;
		case heart:   out << " of Hearts";   break;
		case club:    out << " of Clubs";    break;
		}
	return out;
}

class randomInteger {
	public:
		unsigned int operator () (unsigned int);
} randomizer;

unsigned int randomInteger::operator () (unsigned int max)
{
		// rand return random integer
		// convert to unsigned to make positive
		// take remainder to put in range
	unsigned int rval = rand();
	return rval % max;
}

class Deck {
public:
		// constructor
	Deck ( );

		// operations
	void	shuffle ( )
		{ random_shuffle (cards, cards+52, randomizer); }
	bool	isEmpty ( )
		{ return topCard <= 0; }
	Card	draw ( );

protected:
	Card	cards[52];
	int 	topCard;
};

Deck::Deck ( )
	// initialize a deck by creating all 52 cards
{
	topCard = 0;
	for (int i = 1; i <= 13; i++) {
		Card c1(diamond, i), c2(spade, i), c3(heart, i), c4(club, i);
		cards[topCard++] = c1;
		cards[topCard++] = c2;
		cards[topCard++] = c3;
		cards[topCard++] = c4;	
		}
}

Card Deck::draw ( )
	// return one card from the end of the deck
{
	if (! isEmpty())
		return cards[--topCard];
	else {	  // otherwise return ace of spades
		Card spadeAce(spade, 1);
		return spadeAce;
		}
}

class Player {
public:
		// constructor
	Player (Deck &);

		// operations
	Card	draw ( );
	void	addPoints (int);
	int 	score ();
	void	replaceCard (Deck &);

protected:
	Card	myCards[3];
	int 	myScore;
	int 	removedCard;
};

Player::Player (Deck & aDeck)
	// initialize the data fields for a player
{
	myScore = 0;
	for (int i = 0; i < 3; i++)
		myCards[i] = aDeck.draw();
	removedCard = 0;
}

Card Player::draw ( )
	// return a random card from our hand
{
	removedCard = randomizer(3);
	return myCards[removedCard];
}

void	Player::addPoints (int howMany)
	// add the given number of points to the current score
{
	myScore += howMany;
}

int	Player::score ( )
	// return the current score
{
	return myScore;
}

void	Player::replaceCard (Deck & aDeck)
	// replace last card played with new card
{
	myCards[removedCard] = aDeck.draw();
}

void main() {
	Deck theDeck; // create and shuffle the deck
	theDeck.shuffle();

	Player player1(theDeck); // create the two
	Player player2(theDeck); // players

		// play until deck is empty
	while (! theDeck.isEmpty() ) {
		Card card1  = player1.draw();
		cout << "Player 1 plays " << card1 << endl;
		Card card2 = player2.draw();
		cout << "Player 2 plays " << card2 << endl;

		if (card1.rank == card2.rank) { // tie
			player1.addPoints(1);
			player2.addPoints(1);
			cout << "Players tie\n";
			}
		else if (card1.rank > card2.rank) {
			player1.addPoints(2);
			cout << "Player 1 wins round\n";
			}
		else {
			player2.addPoints(2);
			cout << "Player 2 wins round\n";
			}

			// now replace the cards drawn
		player1.replaceCard(theDeck);
		player2.replaceCard(theDeck);
	}
	cout << "Player 1 score " << player1.score() << endl;
	cout << "Player 2 score " << player2.score() << endl;
}
