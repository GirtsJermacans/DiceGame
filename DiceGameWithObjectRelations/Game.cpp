#include "Game.h"

Game::Game()
	: dice1(), dice2()
{

}

Game::Game(RandomNumberGenerator* random)
	: dice1(random), dice2(random)
{

}

void Game::SetPlayer(Player* player)
{
	this->player = player;
}

void Game::SetPlayerName(string name)
{
	player->SetName(name);
}

void Game::RollDice()
{
	dice1.Roll();
	dice2.Roll();
}

int Game::DisplayDice1() const
{
	return dice1.GetNumber();
}

int Game::DisplayDice2() const
{
	return dice2.GetNumber();
}

string Game::DisplayPlayerName() const
{
	return player->GetName();
}

int Game::DisplayPlayerScore() const
{
	return player->GetScore();
}

void Game::UpdateScore(int amount)
{
	player->SetScore(amount);
}