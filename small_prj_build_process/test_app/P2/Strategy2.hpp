#pragma once

namespace P2
{

struct Strategy2
{
  virtual ~Strategy2(void);
  void proc(void);

private:
  virtual void a(void) = 0;
};

}
