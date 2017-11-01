
#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "LinkedListOfInts.h"
#include <vector>
#include <iostream>

template <typename T>
class TestSuite
{
	public:
		void printPassFail(std::string Description, bool isPassed);
		void test_isEmpty()
	private:
		int TestNum;

};

#endif 
