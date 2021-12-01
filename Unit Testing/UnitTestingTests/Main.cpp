#include <iostream>
#include <stdlib.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include "./GameTest.h"

int main()
{
	CppUnit::TestResult controller;
	CppUnit::TestResultCollector result;
	controller.addListener(&result);

	CppUnit::BriefTestProgressListener progressListener;
	controller.addListener(&progressListener);

    CppUnit::TextUi::TestRunner runner;
    runner.addTest( GameTest::suite() );
    std::cout << "RUNNING GAME TEST SUITE" << std::endl;
    runner.run(controller);

    CppUnit::CompilerOutputter outputter( &result, std::cerr );
    outputter.write();

    system("PAUSE");
    return result.wasSuccessful() ? 0 : 1;
}