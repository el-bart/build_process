#include <string.h>

#include "config.hpp"
#include "Sth.hpp"

using namespace std;

int print(const char *str)
{
  int out=0;
  out+=strlen(NAME);
  out+=strlen(": print: ");
  out+=strlen(str);
  return out;
};

int main(void)
{
  char c[123];
  c[0]=0;
  int ret=0;
  ret+=print("wydruk 1");
  ret+=print("wydruk 200");

  return someFunction()+ret;
};

