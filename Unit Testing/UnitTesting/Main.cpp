#include "Game.h"
#include <iostream>

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	Game game;

	int amount;

	std::cout << "How many numbers do you want: ";
	std::cin >> amount;

	game.generateNumbers(amount);

	system("Pause");
	return 0;
}