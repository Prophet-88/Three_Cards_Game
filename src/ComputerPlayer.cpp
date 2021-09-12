/*
 * ComputerPlayer.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: student
 */

#include "ComputerPlayer.h"
#include <iostream>
#include <vector>

using namespace std;

ComputerPlayer::ComputerPlayer(string name) :Player(name) {
	// TODO Auto-generated constructor stub
}

const Card ComputerPlayer::playCard(const Card opponentCard) {

	if (opponentCard.isJoker()) {
		// we are going first
	} else {
		// we are going second
	}

	// chose a card at random. remember to remove the chosen card
	unsigned int b = rand() % hand.size();
	return hand[b];
	hand.erase(hand.begin()+b);
}
