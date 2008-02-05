#include <iostream>

#include "Lib1/Foo.hpp"

using namespace std;


int main(int argc, char **argv)
{
  Foo f;
  f.resetTo(6);
  cout<<argv[0]<<": "<<f.size()<<endl;
  return 0;
}

