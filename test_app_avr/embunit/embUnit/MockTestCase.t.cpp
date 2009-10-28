#include <embUnit/embUnit.h>
#include "embUnit/MockTestCase.t.hpp"

static void runTest(void)
{
}

TestCaseRef MockTestCase_case(void)
{
	EMB_UNIT_TESTCASE(MockTestCase,"MockTestCase",NULL,NULL,runTest);
	return (TestCaseRef)&MockTestCase;
}
