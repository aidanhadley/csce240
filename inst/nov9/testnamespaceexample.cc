// Copyright 2023 bhipp
// Access items from our first example namespace
#include"somefunctions.h"
// using csce240_fall23_example::Greeting;
using namespace csce240_fall23_example;

int main() {
  // csce240_fall23_example::Greeting();
  Greeting();
  csce240_fall23_the_other_one::Greeting();
  return 0;
}
