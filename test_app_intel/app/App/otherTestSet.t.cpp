/*
 * otherTestSet.t.cpp
 *
 */
#include <tut/tut.hpp>

#include "App/config.hpp"

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
}

} // namespace tut
