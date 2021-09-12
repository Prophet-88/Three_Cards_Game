//============================================================================
// Name        : Three_Cards_Game.cpp
// Author      : Lewis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Deck.h"
#include "Card.h"
#include "TerminalPlayer.h"
#include "ComputerPlayer.h"
using namespace std;

int main() {

	Deck myDeck;
	myDeck.shuffle();
	myDeck.draw();

	TerminalPlayer lewi("Lewi");
	lewi.receiveCard(myDeck.draw());
	lewi.receiveCard(myDeck.draw());
	lewi.receiveCard(myDeck.draw());
	lewi.playCard(Card());

}
