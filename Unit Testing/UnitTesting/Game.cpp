#include "Game.h"

std::set<int> Game::generateNumbers(int t_amount)
{
	while (m_numberList.size() < t_amount)
	{
		m_randomNum = (rand() % 46) + 1;

		m_numberList.insert(m_randomNum);		
	}

	for (const auto& it : m_numberList)
	{
		std::cout << it << std::endl;
	}

	return m_numberList;
}