#include <iostream>
#include <cassert>

#include "Lib1/Fooer.hpp"

using namespace std;

int main(int argc, char **argv)
{
  assert( argc>0 ); // suppress warrning: always true, anyway...
  Fooer f;
  f.reset();
  cout<<argv[0]<<": hello world!\n";
  return 0;
}

