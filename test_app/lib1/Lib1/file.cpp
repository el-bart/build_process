/*
 * file.cpp
 *
 */
#include "Lib1/file.hpp"
extern "C"
{
#include "Lib1/file.h"
}

namespace Lib1
{

int file_in_cpp(void)
{
  return file_in_c()+1;
}

} // namespace Lib1
