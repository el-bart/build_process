#include <iostream>
#include <cassert>

#include "Lib1/MtestExclusive.hpp"
#include "Lib1/Foo.hpp"

using namespace std;


int main(int argc, char **argv)
{
  assert( argc>0 ); // suppress warrning: always true, anyway...
  Foo f;
  f.resetTo(6);
  cout<<argv[0]<<": "<<f.size()<<endl;
  return 0;
}

