/*
 * ComputerPlayer.h
 *
 *  Created on: Nov 29, 2017
 *      Author: student
 */

#ifndef COMPUTERPLAYER_H_
#define COMPUTERPLAYER_H_

#include "Card.h"
#include "Deck.h"
#include "Player.h"


class ComputerPlayer: Player {
public:
	ComputerPlayer(std::string name);
	virtual ~ComputerPlayer(){};

	const Card playCard(const Card opponentCard);
};

#endif /* COMPUTERPLAYER_H_ */
