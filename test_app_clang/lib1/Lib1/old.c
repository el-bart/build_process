#include <pthread.h>

int fcc(void)
{
  return pthread_self();
};

