#pragma once

namespace P1
{

struct Strategy1
{
  virtual ~Strategy1(void);
  void proc(void);

private:
  virtual void x(void) = 0;
  virtual void y(void) = 0;
};

}
