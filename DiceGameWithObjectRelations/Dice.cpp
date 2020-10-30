#include "Dice.h"

Dice::Dice()
{

}

Dice::Dice(RandomNumberGenerator* random)
	: random(random)
{

}

void Dice::Roll()
{
	number = random->GetRandomNumber();
}

int Dice::GetNumber() const
{
	return number;
}