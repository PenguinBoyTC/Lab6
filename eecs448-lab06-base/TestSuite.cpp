#include "TestSuite.h"

void TestSuite::printPassFail(std::string Description, bool isPassed)
{
	TestNum++;
	std::cerr<<"Test "<<TestNum<<":"<<Description<<":";
	if(isPassed)
	{
		std::cerr << "PASSED" << std::endl;
	}
	else
	{
		std::cerr << "FAILED" << std::endl;
	}
}
bool TestSuite::test_isEmpty()
{
	LinkedListOfInts<int> list;
	bool isPassed = false;
	if(list.m_size()==0)
	{
		isPassed = true;
	}
	else
	{
		isPassed = false;
	}


}
bool TestSuite::test_isEmpty()
{
	
}
bool TestSuite::test_isEmpty()
{
	
}
bool TestSuite::test_isEmpty()
{
	
}