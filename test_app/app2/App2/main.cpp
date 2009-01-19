#include <iostream>

#include "config.hpp"


using namespace std;

void print(const char *str)
{
  cout<<NAME<<": "<<"print: "<<str<<endl;
};

int main(void)
{
  char *c=new char[123];    // some memory to leak. :)
  c[0]=0;
  print("wydruk 1");
  print("wydruk 2");

  return 0;
};

