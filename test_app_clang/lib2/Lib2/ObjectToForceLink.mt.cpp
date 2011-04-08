/*
 * ObjectToForceLink.mt.cpp
 *
 */
#include <string>
#include <iostream>
#include <cassert>

#include "Lib1/Reg.hpp"

using namespace std;
using namespace Lib1;

int main(void)
{
  assert( Reg::get().size()==1 && "object not registered" );
  assert("invalid string registered" &&
         Reg::get().at(0)==string("hello Lib2/ObjectToForceLink.cpp :)") );

  cout<<"registered strings:"<<endl;
  for(Reg::StrVec::const_iterator it=Reg::get().begin();
      it!=Reg::get().end();
      ++it)
    cout<<"  -> "<<*it<<endl;

  return 0;
}
