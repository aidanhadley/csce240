//  Copyright 2023 hadleya
//  test drive the initial functionality of the Temperature class
#include"temperature.h"

int main() {
  //  declaring a variable of the Temperature class
  //  instantiating an object of the Temperature class
  Temperature t;  //  automatically calls the constructor
  t.Print();
  // double x = t.value_; can't; it's private
  return 0;
}
