#include <iostream>

#include "Lib1/Fooer.hpp"
extern "C"
{
#include "Lib1/old.h"
};
#include "Lib1/subdir/Write.hpp"
#include "config.hpp"

using namespace std;

int main(int argc, char **argv)
{
  cout<<argv[0]<<"\n";
  Fooer fooer;
  fooer.resetTo(10);
  // use C-code
  cout<<"C-code: "<<fcc()<<endl;

  return 0;
}

