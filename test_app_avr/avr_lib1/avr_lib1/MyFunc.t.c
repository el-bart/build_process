#include <math.h>

#include "embUnit/embUnit.h"

#include "avr_lib1/MyFunc.h"

static void setUp(void)
{
}

static void tearDown(void)
{
}

static void testLog10(void)
{
  const int r=myFunc(10);
  const int e=log(10)+1;
  TEST_ASSERT_EQUAL_INT(r, e);
}

static void testLog1(void)
{
  const int r=myFunc(1);
  const int e=log(1)+1;
  TEST_ASSERT_EQUAL_INT(r, e);
}

TestRef MyFunc_testsuit(void)
{
  EMB_UNIT_TESTFIXTURES(fixtures)
  {
    new_TestFixture("testLog10", testLog10),
    new_TestFixture("testLog1",  testLog1 ),
  };
  EMB_UNIT_TESTCALLER(caller, "Example", setUp, tearDown, fixtures);

  return (TestRef)&caller;
}
