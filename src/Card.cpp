/*
 * Card.cpp
 *
 *  Created on: Nov 9, 2017
 *      Author: student
 */

#include "Card.h"

using namespace std;

Card::Card(Suit s, Rank r) :
		cardSuit { s }, cardRank { r } {

}

Card::Card() {
	cardRank = Joker;
	cardSuit = Spades;
}

Card::~Card() {

}

/**
 * Output the card to an output stream as "rank of suit"
 */
ostream& operator <<(std::ostream&out, const Card&a) {
	out << a.cardRank << " of "<< a.cardSuit;
	return out;
}

bool operator <(const Card &lhs, const Card &rhs){
	return lhs.cardRank < rhs.cardRank;
}


bool operator ==(const Card &lhs, const Card &rhs) {
	return lhs.cardRank == rhs.cardRank;
}
