/*
 * TerminalPlayer.cpp
 *
 *  Created on: Nov 21, 2017
 *      Author: student
 */

#include "TerminalPlayer.h"
#include <iostream>
#include <vector>

using namespace std;

TerminalPlayer::TerminalPlayer(string name) : Player(name) {
	// TODO Auto-generated constructor stub

}

std::ostream& operator <<(std::ostream& out, const Player& p) {
	out << p.name;
	return out;
}

const Card TerminalPlayer::playCard(const Card opponentCard) {

	if (opponentCard.isJoker()) {
		// we are going first
		cout << "Cards on hand:" << endl;
	} else {
		// we are going second
		cout << "Opponent played a " << opponentCard << endl;
	}

	// display the cards in our hand
	for (unsigned int index = 0; index < hand.size(); index++){
		int cardNum = 1;
		cout << cardNum << hand[index] << endl;
	}
	// prompt the player for the card they want to play
	int playInput;
	cout << "Please enter which card do you want to play:\n";
	cin >> playInput;
	playInput = playInput -1;
	// return the chosen card. remember to remove the chosen card
	return hand[playInput];
	hand.erase(hand.begin()+playInput);
}
