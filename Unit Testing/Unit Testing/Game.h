#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <set>

class Game
{
public:

	Game() {};
	~Game() {};
	std::set<float> generateNumbers(int t_amount);

private:

	int m_randomNum = 0;
	std::set<float> m_numberList;
};
#endif