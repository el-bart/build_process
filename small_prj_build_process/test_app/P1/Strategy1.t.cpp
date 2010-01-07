/*
 * Strategy1.t.cpp
 *
 */
#include <tut.h>

#include "P1/Strategy1.hpp"

using namespace P1;

namespace
{

struct TestImpl: public Strategy1
{
  TestImpl(void):
    callsX_(0),
    callsY_(0)
  {
  }

  virtual void x(void)
  {
    ++callsX_;
  }

  virtual void y(void)
  {
    ++callsY_;
  }

  int callsX_;
  int callsY_;
};

struct TestClass
{
  TestImpl ti_;
};

typedef TestClass TestClass;
typedef tut::test_group<TestClass> factory;
typedef factory::object testObj;

factory tf("P1/Strategy1");
} // unnamed namespace


namespace tut
{

template<>
template<>
void testObj::test<1>(void)
{
  ti_.proc();
  ensure_equals("invalid number of calls to X", ti_.callsX_, 1);
}

template<>
template<>
void testObj::test<2>(void)
{
  ti_.proc();
  ensure_equals("invalid number of calls to Y", ti_.callsY_, 1);
}

} // namespace tut
