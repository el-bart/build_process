#include <iostream>
#include <cassert>

#include "Lib1/Fooer.hpp"

#ifdef LIB1_TEST_ONLY__LOCAL_FLAG
#error "LIB1_TEST_ONLY__LOCAL_FLAG set in manual tests too"
#endif

#ifndef LIB1__LOCAL_FLAG
#error "LIB1__LOCAL_FLAG not set"
#endif

using namespace std;

int main(int argc, char **argv)
{
  assert( argc>0 ); // suppress warrning: always true, anyway...
  Fooer f;
  f.reset();
  cout<<argv[0]<<": hello world!\n";
  return 0;
}

