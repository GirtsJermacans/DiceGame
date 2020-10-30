#pragma once
#include <random>
#include <ctime>

class RandomNumberGenerator
{
	public:
		// constructor(s)
		RandomNumberGenerator();

		// getters
		int GetRandomNumber();

	private:
		const int max = 6;
		int random;
};

