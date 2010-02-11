#include "P1/Strategy1_1.hpp"
#include "P1/Strategy1_2.hpp"
#include "P2/Strategy2_1.hpp"
#include "P2/Strategy2_2.hpp"
extern "C"
{
#include "hello.h"
}

struct A
{
  virtual ~A(void)
  {
  }
  virtual void p(void) = 0;
};

template<typename TStrategy>
struct B: public A
{
  virtual void p(void)
  {
    s_.proc();
  }

  TStrategy s_;
};


int main(void)
{
  hello("build");

  B< P2::Strategy2_1 >  b;
  //B< P1::Strategy1_2 >  b;
  A                    &a=b;
  a.p();
  return 0;
}
