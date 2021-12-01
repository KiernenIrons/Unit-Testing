#ifndef GAMETEST_HPP
#define GAMETEST_HPP

#include <cppunit/TestFixture.h>
#include <cppunit/TestAssert.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <queue>
#include <set>
#include "../UnitTesting/Game.h"

class GameTest : public CppUnit::TestFixture
{
private:

    Game* m_game;
    std::set<int> m_nums;
    const int m_MAX_NUMS{6};

public:


    static CppUnit::Test* suite();
    void setUp();

    void hasXAmountOfNumbers();
    void repeatedTest();
    void outOfRange();
};
#endif