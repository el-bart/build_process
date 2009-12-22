#include "Lib1/Reg.hpp"

//
// this header defienes FORCE_LINK_THIS_OBJECT(name) macro used later in this
// file. this header is provided by build_process itself.
//
// NOTE: including this file makes only sens inside source file - it should be
//       not be included in header files at all!
//
#include "BuildProcess/ForceLink.hpp"

namespace App
{

// registering code itself does not have to be available outside this module
namespace
{
bool doItBeforeMain(void)
{
  Lib1::Reg::get().push_back("hello App/OtherObjectToForceLink.cpp :)");
  return true;
}

const bool registered=doItBeforeMain();

} // unnmaed namespace


//
// this macro allows force-linking of a given object. name, given as a
// parameter has to be uniq in the whole project. it also has to be valid
// C++ variable name.
//
FORCE_LINK_THIS_OBJECT(App_OtherObjectToForceLink)

} // namespace App
