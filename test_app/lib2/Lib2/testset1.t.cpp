/*
 * testset1.t.cpp
 *
 * some example test set for test application.
 *
 */
#include <tut.h>

extern "C"
{
#include "Lib1/old.h"
}

namespace tut
{

struct SomeTestClass
{
  bool isZero(int v) const
  {
    return v==0;
  }
};

} // namespace tut


namespace tut
{
typedef SomeTestClass TestClass;
typedef test_group<TestClass> factory;
typedef factory::object testObj;
} // namespace tut


namespace
{
tut::factory tf("SomeTestClass");
}



namespace tut
{

template<>
template<>
void testObj::test<1>(void)
{
  ensure(  isZero(0) );
  ensure( !isZero(2) );
}

template<>
template<>
void testObj::test<2>(void)
{
  ensure_equals("oops", fcc()-fcc(), 0);
}

} // namespace tut

