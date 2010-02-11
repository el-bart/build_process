#include "Lib1/Reg.hpp"

namespace Lib1
{

Reg::StrVec &Reg::get(void)
{
  static StrVec vec_;
  return vec_;
}

}
