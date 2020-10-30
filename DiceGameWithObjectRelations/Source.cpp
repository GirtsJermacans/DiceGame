#include <iostream>
#include <string>
#include "Game.h"
#include "Player.h"
#include "RandomNumberGenerator.h"

using namespace std;
void displayMainMenu(int&, const Game&);
void rollDice(Game&);
void displayBothDices(const Game&);
void updateScore(Game& game, const int&, const int&);
void checkScore(const Game&);

int main()
{
	const int scorePlusOne = 1;
	const int scoreMinusFive = -5;
	RandomNumberGenerator random;
	Player player;
	Game game(&random);
	game.SetPlayer(&player);

	cout << "Welcome To Dice Game" << endl;
	cout << "Please provide user name: " << endl;
	string name;
	cin >> name;
	game.SetPlayerName(name);

	int choice;
	do
	{
		displayMainMenu(choice, game);
		
		switch (choice)
		{
			case 1:
			{
				rollDice(game);
				displayBothDices(game);
				updateScore(game, scoreMinusFive, scorePlusOne);
				break;
			}
			case 2:
				checkScore(game);
				break;
			case 3:
				break;
		}

	} while (choice != 3);


	cin.get();
	return 0;
}

void displayMainMenu(int& choice, const Game& game) // work on this
{
	cout << "\n***********************\n\n" << endl;
	cout << "Player " + game.DisplayPlayerName() << endl;
	cout << "1 : Roll Dice" << endl;
	cout << "2 : Check Score" << endl;
	cout << "3 : Quit" << endl;
	cin >> choice;
}

void rollDice(Game& game)
{
	game.RollDice();
	system("CLS");
}

void displayBothDices(const Game& game)
{
	cout << "\nResult ****************\n\n";
	cout << "Dice 1: ";
	cout << game.DisplayDice1() << endl;
	cout << "Dice 2: ";
	cout << game.DisplayDice2() << endl;
}

void updateScore(Game& game, const int& scoreMinusFive, const int& scorePlusOne)
{
	if (game.DisplayDice1() == 1)
	{
		if (game.DisplayDice1() == game.DisplayDice2())
		{
			game.UpdateScore(scoreMinusFive);
			cout << "-5 .." << endl;
		}
	}
	else if (game.DisplayDice1() == 6)
	{
		if (game.DisplayDice1() == game.DisplayDice2())
		{
			if (game.DisplayPlayerScore() > 0)
			{
				game.UpdateScore(game.DisplayPlayerScore());
				cout << "doubled.." << endl;
			}
		}
	}
	else if (game.DisplayDice1() == game.DisplayDice2())
	{
		game.UpdateScore(scorePlusOne);
		cout << "+1 .." << endl;
	}
}

void checkScore(const Game& game)
{
	system("CLS");
	cout << "\n**********************\n\n";
	cout << "Name: ";
	cout << game.DisplayPlayerName() << endl;
	cout << "Score: ";
	cout << game.DisplayPlayerScore() << endl;
}