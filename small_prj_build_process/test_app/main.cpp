#include "P1/Strategy1_1.hpp"
#include "P1/Strategy1_2.hpp"
#include "P2/Strategy2_1.hpp"
#include "P2/Strategy2_2.hpp"

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
  // TODO: c-tor...

  virtual void p(void)
  {
    s_.proc();
  }

  TStrategy s_;
};


int main(void)
{
  B< Strategy1_2 >  b;
  A                &a=b;
  a.p();
  return 0;
}
