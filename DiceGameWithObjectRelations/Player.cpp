#include "Player.h"

Player::Player()
	: score()
{

}

string Player::GetName() const
{
	return name;
}

int Player::GetScore() const
{
	return score.GetResult();
}


void Player::SetName(string name)
{
	this->name = name;
}

void Player::SetScore(int amount)
{
	score.UpdateResult(amount);
}