#include "GameTest.h"

void GameTest::setUp()
{
    m_game = new Game();
}

void GameTest::hasXAmountOfNumbers()
{
    m_nums = m_game->generateNumbers(m_MAX_NUMS);

    CPPUNIT_ASSERT(m_nums.size() == m_MAX_NUMS);
}

void GameTest::repeatedTest()
{
    bool repeated = false;

    m_nums = m_game->generateNumbers(m_MAX_NUMS);

    for (std::set<int>::iterator it = m_nums.begin(); it != m_nums.end(); it++)
    {
        for (std::set<int>::iterator itt = m_nums.begin(); itt != m_nums.end(); itt++)
        {
            if (it == itt)
            {
                continue;
            }

            CPPUNIT_ASSERT(*it != *itt);
        }
    }
}

void GameTest::outOfRange()
{
    bool outOfRange = false;

    m_nums = m_game->generateNumbers(m_MAX_NUMS);

    for(std::set<int>::iterator it = m_nums.begin(); it != m_nums.end(); it++)
    {
        if (*it < 47 && *it > 0)
        {
            continue;
        }
        else
        {
            outOfRange = true;
            break;
        } 
    }

    CPPUNIT_ASSERT(outOfRange == false);
}

CppUnit::Test* GameTest::suite()
{
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "GameTest" );

    suiteOfTests->addTest( new CppUnit::TestCaller<GameTest>( 
    "hasXAmountOfNumbers\n", 
    &GameTest::hasXAmountOfNumbers ) );    

    suiteOfTests->addTest( new CppUnit::TestCaller<GameTest>( 
    "repeatedTest\n", 
    &GameTest::repeatedTest ) );

    suiteOfTests->addTest( new CppUnit::TestCaller<GameTest>( 
    "outOfRange\n", 
    &GameTest::outOfRange ) );

    return suiteOfTests;
}