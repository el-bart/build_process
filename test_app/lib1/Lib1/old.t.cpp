/*
 * old.t.cpp
 *
 */
#include <tut.h>

extern "C"
{
#include "Lib1/old.h"
}

namespace tut
{

struct OldTestClass
{
};

} // namespace tut


namespace tut
{
typedef OldTestClass TestClass;
typedef test_group<TestClass> factory;
typedef factory::object testObj;
} // namespace tut


namespace
{
tut::factory tf("Lib1/old");
}



namespace tut
{

template<>
template<>
void testObj::test<1>(void)
{
  ensure("impossible condition", fcc()>=0 );
}

} // namespace tut

