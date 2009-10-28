#include "embUnit/embUnit.h"

#include "avr_lib1/MyFunc.h"

static void setUp(void)
{
}

static void tearDown(void)
{
}

static void testMyFunc10(void)
{
  const int r=myFunc(10);
  TEST_ASSERT_EQUAL_INT(r, 3);
}

static void testMyFunc1(void)
{
  const int r=myFunc(1);
  TEST_ASSERT_EQUAL_INT(r, 1);
}

TestRef MyFunc_testsuit(void)
{
  EMB_UNIT_TESTFIXTURES(fixtures)
  {
    new_TestFixture("testMyFunc10", testMyFunc10),
    new_TestFixture("testMyFunc1",  testMyFunc1 ),
  };
  EMB_UNIT_TESTCALLER(caller, "MyFunc", setUp, tearDown, fixtures);

  return (TestRef)&caller;
}
