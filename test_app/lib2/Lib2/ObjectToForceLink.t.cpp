/*
 * ObjectToForceLink.t.cpp
 *
 */
#include <tut.h>
#include <string>

#include "Lib1/Reg.hpp"

namespace
{
struct TestClass
{
};

typedef TestClass TestClass;
typedef tut::test_group<TestClass> factory;
typedef factory::object testObj;

factory tf("Lib2/ObjectToForceLink");
} // unnamed namespace


namespace tut
{

// if force link works, there should be object registered
template<>
template<>
void testObj::test<1>(void)
{
  ensure_equals("object not registered", Lib1::Reg::get().size(), 1);
  ensure_equals("invalid string registered",
                Lib1::Reg::get().at(0),
                std::string("hello Lib2/ObjectToForceLink.cpp :)") );
}

} // namespace tut
