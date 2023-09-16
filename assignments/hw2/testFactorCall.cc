// Copyright 2023 bhipp
// Sample tests for the testSumDigits function
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"  // expected cpplint error message

int main() {
  Factor(3);  // 3 is prime
  Factor(10);  // 10 = 2 * 5
  Factor(-154);  // -154 = -2 * 7 * 11
  Factor(351);  // 351 = 3 * 3 * 3 * 13
  return 0;
}

