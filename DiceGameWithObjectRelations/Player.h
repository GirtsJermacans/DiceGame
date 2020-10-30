#pragma once
#include <string>
#include "Score.h"
using namespace std;

class Player
{
	public:
		// constructor(s)
		Player();

		// getters
		string GetName()	const;
		int GetScore()		const;

		// setters
		void SetName(string name);
		void SetScore(int amount);
			
	private:
		string name;
		Score score;
};

