/*
 * ObjectToForceLink.t.cpp
 *
 */
#include <tut.h>
#include <string>

#include "Lib1/Reg.hpp"
#include "Lib3/Reg.hpp"

namespace
{
struct TestClass
{
};

typedef TestClass TestClass;
typedef tut::test_group<TestClass> factory;
typedef factory::object testObj;

factory tf("App/ObjectToForceLink");
} // unnamed namespace


namespace tut
{

// if force link works, there should be objects registered
template<>
template<>
void testObj::test<1>(void)
{
  ensure_equals("object not registered", Lib1::Reg::get().size(), 3);
}

// if force link works, there should be object registered
template<>
template<>
void testObj::test<2>(void)
{
  ensure_equals("object not registered", Lib3::Reg::get().size(), 1);
}

} // namespace tut
