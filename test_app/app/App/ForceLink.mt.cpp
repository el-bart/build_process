/*
 * ForceLink.mt.cpp
 *
 */
#include <string>
#include <iostream>
#include <cassert>

#include "Lib1/Reg.hpp"
#include "Lib3/Reg.hpp"

using namespace std;

int main(void)
{
  int ret=0;
  if( Lib1::Reg::get().size()!=3 ||
      Lib3::Reg::get().size()!=1    )
  {
    cerr<<"not all objects registered"<<endl;
    ret=1;
  }

  cout<<"registered strings:"<<endl;
  // Lib1
  for(Lib1::Reg::StrVec::const_iterator it=Lib1::Reg::get().begin();
      it!=Lib1::Reg::get().end();
      ++it)
    cout<<"  -> "<<*it<<endl;
  // Lib3
  for(Lib3::Reg::StrVec::const_iterator it=Lib3::Reg::get().begin();
      it!=Lib3::Reg::get().end();
      ++it)
    cout<<"  -> "<<*it<<endl;

  return ret;
}
