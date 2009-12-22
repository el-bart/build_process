/*
 * ObjectToForceLink.mt.cpp
 *
 */
#include <string>
#include <iostream>
#include <cassert>

#include "Lib3/Reg.hpp"

using namespace std;
using namespace Lib3;

int main(void)
{
  assert( Reg::get().size()==1 && "object not registered" );
  assert("invalid string registered" &&
         Reg::get().at(0)==string("hello Lib3/ObjectToForceLink.cpp :)") );

  cout<<"registered strings:"<<endl;
  for(Reg::StrVec::const_iterator it=Reg::get().begin();
      it!=Reg::get().end();
      ++it)
    cout<<"  -> "<<*it<<endl;

  return 0;
}
