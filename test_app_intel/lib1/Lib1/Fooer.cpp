#include <stdlib.h>

#include "Lib1/Fooer.hpp"

#ifndef SOME_PROJECT_SPECIFIC_OPTION
#error "SOME_PROJECT_SPECIFIC_OPTION not set - project-specific flags not working"
#endif

#ifndef LIB1__LOCAL_FLAG
#error "LIB1__LOCAL_FLAG not set"
#endif


void Fooer::reset(void)
{
    resetTo(0);
};

