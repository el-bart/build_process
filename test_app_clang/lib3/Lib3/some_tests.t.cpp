#include <tut.h>

namespace tut
{

struct SomeTestClassX
{
  bool isZero(int v) const
  {
    return v==0;
  }
};

} // namespace tut


namespace tut
{
typedef SomeTestClassX TestClass;
typedef test_group<TestClass> factory;
typedef factory::object testObj;
} // namespace tut


namespace
{
tut::factory tf("SomeTestClassX");
}



namespace tut
{

template<>
template<>
void testObj::test<1>(void)
{
  ensure( 1!=2 );
}

} // namespace tut

