#pragma once

struct Strategy2
{
  virtual ~Strategy2(void);
  void proc(void);

private:
  virtual void a(void) = 0;
};
