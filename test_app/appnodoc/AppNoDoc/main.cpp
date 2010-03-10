#include <iostream>

#include "AppNoDoc/NoDoc.hpp"

using namespace std;


int main(void)
{
  const AppNoDoc::NoDoc nd;
  cout<<"magick number is: "<<nd.iAmNotDocumented()<<endl;
  return 0;
};

