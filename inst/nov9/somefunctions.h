// Copyright 2023 bhipp
// first examples with a namespace
#ifndef _SOME_FUNCTIONS_H_
#define _SOME_FUNCTIONS_H_

#include<iostream>

namespace csce240_fall23_example {

void Greeting() {
  std::cout << "How are you doing this fine day?" << std::endl;
}

}  // end namespace csce240_fall23_example

namespace csce240_fall23_the_other_one {

void Greeting() {
  std::cout << "Hi" << std::endl;
}

}  // end namespace csce240_fall23_the_other_one
#endif
