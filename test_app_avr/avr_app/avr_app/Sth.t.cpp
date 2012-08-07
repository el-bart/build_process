#include <math.h>

#include "avr_app/Sth.hpp"

static int testSomeFunction(void)
{
  if( someFunction()!=4 )
    return 1;
  return 0;
}

int MyFunc_testsuit(void)
{
  return testSomeFunction();
}
