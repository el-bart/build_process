/*
 * some_manual_test.mt.cpp
 *
 */
#include <iostream>

extern "C"
{
#include "Lib1/old.h"
}

using namespace std;

int main(void)
{
  cout<<"concurency level: "<<fcc()<<endl;
  return 0;
}
