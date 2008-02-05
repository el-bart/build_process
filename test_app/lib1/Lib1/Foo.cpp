#include "Lib1/Foo.hpp"

void Foo::resetTo(int v)
{
    for(unsigned int i=0; i<size(); ++i)
        a[i]=v;
};

unsigned int Foo::size(void) const
{
    return sizeof(a)/sizeof(a[0]);
};

