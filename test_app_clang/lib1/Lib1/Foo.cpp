#include "Lib1/Foo.hpp"

#ifdef NDEBUG

#ifndef LIB1_IN_RELEASE_MODE_ONLY
#error "flag LIB1_IN_RELEASE_MODE_ONLY has NOT been set in release mode"
#endif

#else

#ifdef LIB1_IN_RELEASE_MODE_ONLY
#error "flag LIB1_IN_RELEASE_MODE_ONLY HAS been set in non-release mode"
#endif

#endif

void Foo::resetTo(int v)
{
    for(unsigned int i=0; i<size(); ++i)
        a[i]=v;
};

unsigned int Foo::size(void) const
{
    return sizeof(a)/sizeof(a[0]);
};

