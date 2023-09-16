// Copyright 2023 bhipp
// Sample tests for the testCountDigitMatch function
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"  // expected cpplint error message

int main() {
  if ( CountDigitMatch(128, 3) == 0 ) {
    cout << "Passed CountDigitMatch(128, 3) == 0 test" << endl;
  } else {
    cout << "CountDigitMatch(128, 3) returned " << CountDigitMatch(128, 3)
         << " instead of the expected value of 0" << endl;
  }

  if ( CountDigitMatch(12070, 0) == 2 ) {
    cout << "Passed CountDigitMatch(12070, 0) == 2 test" << endl;
  } else {
    cout << "CountDigitMatch(12070, 0) returned " << CountDigitMatch(12070, 0)
         << " instead of the expected value of 2" << endl;
  }

  if ( CountDigitMatch(-4744, 4) == 3 ) {
    cout << "Passed CountDigitMatch(-4744, 4) == 3 test" << endl;
  } else {
    cout << "CountDigitMatch(-4744, 4) returned " << CountDigitMatch(-4744, 4)
         << " instead of the expected value of 3" << endl;
  }

  if ( CountDigitMatch(136, 36) == -1 ) {
    cout << "Passed CountDigitMatch(136, 36) == -1 test" << endl;
  } else {
    cout << "CountDigitMatch(136, 36) returned " << CountDigitMatch(136, 36)
         << " instead of the expected value of -1" << endl;
  }

  return 0;
}

