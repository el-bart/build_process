/*
 * manualtest.mt.cpp
 *
 */
#include <iostream>

#ifndef SOME_LIB2_SPECIAL_FLAG_FOR_MTESTS_ONLY
#error "flag SOME_LIB2_SPECIAL_FLAG_FOR_MTESTS_ONLY has not been set for mtests"
#endif

using namespace std;

int main(void)
{
  cout<<"hello test!"<<endl;
  return 0;
}
