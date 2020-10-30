#pragma once
#include "RandomNumberGenerator.h"

class Dice
{
	public:
		// constructor(s)
		Dice();
		Dice(RandomNumberGenerator* random);

		// getters
		int GetNumber() const;

		// mutators
		void Roll();

	private:
		int number = 0;
		RandomNumberGenerator* random = nullptr;
};

