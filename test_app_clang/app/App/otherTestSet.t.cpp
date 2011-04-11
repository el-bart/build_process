/*
 * otherTestSet.t.cpp
 *
 */
#include <tut/tut.hpp>

#include "LibTest1/TestHelper.hpp"
#include "App/config.hpp"

//using namespace App;

namespace
{
struct TestClass
{
};

typedef tut::test_group<TestClass> factory;
typedef factory::object            testObj;

factory tf("App/config");
} // unnamed namespace


namespace tut
{

template<>
template<>
void testObj::test<1>(void)
{
  LibTest1::TestHelper deepThough;
  ensure_equals("invalid answer", deepThough.getAnswer(), 42);
}

} // namespace tut
