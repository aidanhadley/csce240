// Copyright 2023 bhipp
// Sample tests for the testSameDigits function
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"  // expected cpplint error message

int main() {
  if ( SameDigits(1231, 3112) ) {
    cout << "Passed SameDigits(1231, 3112) test" << endl;
  } else {
    cout << "Failed SameDigits(1231, 3112) test" << endl;
  }

  if ( !SameDigits(1231, 312) ) {
    cout << "Passed SameDigits(1231, 312) test" << endl;
  } else {
    cout << "Failed SameDigits(1231, 312) test" << endl;
  }

  if ( SameDigits(-1231, 3112) ) {
    cout << "Passed SameDigits(-1231, 3112) test" << endl;
  } else {
    cout << "Failed SameDigits(-1231, 3112) test" << endl;
  }


  return 0;
}

