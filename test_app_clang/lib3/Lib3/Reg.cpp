#include "Lib3/Reg.hpp"

namespace Lib3
{

Reg::StrVec &Reg::get(void)
{
  static StrVec vec_;
  return vec_;
}

}
