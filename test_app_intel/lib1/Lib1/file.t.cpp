/*
 * file.t.cpp
 *
 */
#include <tut.h>

#include "Lib1/file.hpp"

namespace tut
{

struct FileTestClass
{
};

} // namespace tut


namespace tut
{
typedef FileTestClass TestClass;
typedef test_group<TestClass> factory;
typedef factory::object testObj;
} // namespace tut


namespace
{
tut::factory tf("Lib1/file");
}

namespace tut
{

template<>
template<>
void testObj::test<1>(void)
{
  ensure_equals("impossible condition", Lib1::file_in_cpp(), 42);
}

} // namespace tut

