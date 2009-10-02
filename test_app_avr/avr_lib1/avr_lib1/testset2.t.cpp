/*
 * testset2.t.cpp
 *
 * some example test set for test application.
 *
 */
#include <tut.h>

namespace tut
{

struct SomeTestClass2
{
  bool isZero(int v) const
  {
    return v==0;
  }
};

} // namespace tut


namespace tut
{
typedef SomeTestClass2 TestClass;
typedef test_group<TestClass> factory;
typedef factory::object testObj;
} // namespace tut


namespace
{
tut::factory tf("Diffrent/Set");
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
  ensure( !isZero(0) ); // this should fail
}

} // namespace tut

