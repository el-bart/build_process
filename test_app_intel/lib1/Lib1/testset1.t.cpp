/*
 * testset1.t.cpp
 *
 * some example test set for test application.
 *
 */
#include <tut.h>

#ifndef LIB1_TEST_ONLY__LOCAL_FLAG
#error "LIB1_TEST_ONLY__LOCAL_FLAG not set in tests"
#endif

#ifndef LIB1__LOCAL_FLAG
#error "LIB1__LOCAL_FLAG not set"
#endif

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

} // namespace tut

