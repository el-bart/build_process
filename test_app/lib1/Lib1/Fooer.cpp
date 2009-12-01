#include <stdlib.h>

#include "Lib1/Fooer.hpp"

#ifndef SOME_PROJECT_SPECIFIC_OPTION
#error "SOME_PROJECT_SPECIFIC_OPTION not set - project-specific flags not working"
#endif

void Fooer::reset(void)
{
    resetTo(0);
};

