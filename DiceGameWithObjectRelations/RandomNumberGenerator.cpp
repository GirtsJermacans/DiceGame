#include "RandomNumberGenerator.h"

RandomNumberGenerator::RandomNumberGenerator()
{
	srand(static_cast<unsigned> (time(0)));
}

int RandomNumberGenerator::GetRandomNumber()
{
	random = (rand() % max) + 1;
	return random;
}
