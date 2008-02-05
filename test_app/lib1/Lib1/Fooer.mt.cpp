#include <iostream>

#include "Lib1/Fooer.hpp"

using namespace std;

int main(int argc, char **argv)
{
  Fooer f;
  f.reset();
  cout<<argv[0]<<": hello world!\n";
  return 0;
}

