#ifndef SOME_CODE_H
#define SOME_CODE_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "some_sub_include.h"

#ifndef SOME_IMPORTANT_DEFINE
#error include file is missing - somethin'g wrong with additional includes paths
#endif

int some_code(int question);

#ifdef __cplusplus
}
#endif

#endif
