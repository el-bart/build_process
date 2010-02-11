#include <iostream>

#include "Lib1/Fooer.hpp"
extern "C"
{
#include "Lib1/old.h"
};
#include "Lib1/subdir/Write.hpp"
#include "Lib3/call.hpp"
#include "config.hpp"
#include "Lib1/Reg.hpp"
#include "Lib3/Reg.hpp"

using namespace std;

void print(const Foo &foo)
{
  writeString( string("print() :)") );
  for(unsigned int i=0; i<foo.size(); ++i)
    cout<<foo.a[i]<<" ";
  cout<<endl;
}

int main(void)
{
  Fooer fooer;

  print(fooer);
  fooer.resetTo(10);
  print(fooer);
  fooer.reset();
  print(fooer);

  // use C-code
  cout<<"C: "<<fcc()<<endl;

  // Lib3 - call
  call();

  cout<<"force-link registered strings:"<<endl;
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

  return 0;
}

