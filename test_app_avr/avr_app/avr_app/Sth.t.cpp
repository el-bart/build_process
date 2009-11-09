#include <math.h>

#include "embUnit/embUnit.h"

#include "avr_app/Sth.hpp"

static void setUp(void)
{
}

static void tearDown(void)
{
}

static void testSomeFunction(void)
{
  const int r=someFunction();
  TEST_ASSERT_EQUAL_INT(r, 4);
}

TestRef MyFunc_testsuit(void)
{
  EMB_UNIT_TESTFIXTURES(fixtures)
  {
    new_TestFixture("testSomeFunction", testSomeFunction),
  };
  EMB_UNIT_TESTCALLER(caller, "SomeFunction", setUp, tearDown, fixtures);

  return (TestRef)&caller;
}
