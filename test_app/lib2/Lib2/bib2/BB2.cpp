#include <math.h>

#include "Lib1/Fooer.hpp"
#include "Lib2/bib2/BB2.hpp"

void BB2::resetTo(int v)
{
  if(v)
    a[0]=0;
  else
  {
    /*Lib1::*/Fooer f;
    f.reset();
  }

  for(unsigned int i=0; i<size(); ++i)
    a[i]=(sqrt(i)>1)?1:0;
}

unsigned int BB2::size(void) const
{
  return sizeof(a)/sizeof(a[0]);
}

