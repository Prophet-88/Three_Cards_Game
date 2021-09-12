/*
 * Deck.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: student
 */

#include "Deck.h"
#include "Card.h"
#include <algorithm>
#include <random>
#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

/**
 * Constructor and destructor
 */
Deck::Deck() {
	for (unsigned int suit = 0; suit < 4; suit++) {
		for (unsigned int rank = 1; rank < 14; rank++) {
			cardDeck.push_back(
					Card(static_cast<Card::Suit>(suit),
							static_cast<Card::Rank>(rank)));
		}
	}
	nextCard = 0;
}

Deck::~Deck() {

}

/**
 * Shuffle the deck and reset the next available card to the beginning of the deck
 */
void Deck::shuffle() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::shuffle(cardDeck.begin(), cardDeck.end(),
			std::default_random_engine(seed));
	nextCard = 0;
}

/**
 * Return true if the deck is empty (next available card is past the end of the deck)
 */
bool Deck::isEmpty() const {
	return nextCard == MaxCards;
}

/**
 * Draw a card from the deck. If someone attempts to draw a card when the deck is
 * empty then throw an exception.
 */
const Card Deck::draw() {
	if (nextCard == MaxCards) {
		throw;
	} else {
		return cardDeck[nextCard++];
	}
}
