#include "avr_app/Reg.hpp"

namespace Lib1
{

const char *&Reg::get(void)
{
  static const char *ptr;
  return ptr;
}

}
