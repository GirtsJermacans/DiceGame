#pragma once
#include "Player.h"
#include "Dice.h"

class Game
{
	public:
		// constructor(s)
		Game();
		Game(RandomNumberGenerator* random);

		// getter
		int DisplayDice1()			const;
		int DisplayDice2()			const;
		string DisplayPlayerName()	const;
		int DisplayPlayerScore()	const;

		// setter
		void SetPlayer(Player* player);
		void SetPlayerName(string name);
		void RollDice();
		void UpdateScore(int amount);

	private:
		Player* player = nullptr;
		Dice dice1;
		Dice dice2;

};

