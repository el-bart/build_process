#include "avr_lib1/MyFunc.h"

static int testMyFunc10(void)
{
  if( myFunc(10)!=3 )
    return 1;
  return 0;
}

static int testMyFunc1(void)
{
  if( myFunc(1)!=1 )
    return 1;
  return 0;
}

int MyFunc_testsuit(void)
{
  int res=0;
  res+=testMyFunc10();
  res+=testMyFunc1();
  return res;
}
