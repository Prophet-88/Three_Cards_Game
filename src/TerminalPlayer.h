/*
 * TerminalPlayer.h
 *
 *  Created on: Nov 21, 2017
 *      Author: student
 */

#ifndef TERMINALPLAYER_H_
#define TERMINALPLAYER_H_

#include <vector>
#include <string>

#include "Card.h"
#include "Deck.h"
#include "Player.h"

class TerminalPlayer : Player {
public:
	TerminalPlayer(std::string name);
	virtual ~TerminalPlayer(){};

	const Card playCard(const Card opponentCard);
};
#endif /* TERMINALPLAYER_H_ */
