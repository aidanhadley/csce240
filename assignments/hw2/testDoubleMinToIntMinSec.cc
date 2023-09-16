// Copyright 2023 bhipp
// Sample tests for the testSumDigits function
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"  // expected cpplint error message

int main() {
  int imin, isec;

  imin = isec = -1;
  DoubleMinToIntMinSec(0, imin, isec);
  if ( imin == 0 && isec == 0 ) {
    cout << "Passed DoubleMinToIntMinSec(0, imin, isec) test" << endl;
  } else {
    cout << "Failed DoubleMinToIntMinSec(0, imin, isec) test\n"
         << "\timin = " << imin << " (should be 0)\n\tisec = " << isec
         << " (should be 0)" << endl;
  }

  imin = isec = -1;
  DoubleMinToIntMinSec(3.5, imin, isec);
  if ( imin == 3 && isec == 30 ) {
    cout << "Passed DoubleMinToIntMinSec(3.5, imin, isec) test" << endl;
  } else {
    cout << "Failed DoubleMinToIntMinSec(3.5, imin, isec) test\n"
         << "\timin = " << imin << " (should be 3)\n\tisec = " << isec
         << " (should be 30)" << endl;
  }

  imin = isec = -1;
  DoubleMinToIntMinSec(0.25, imin, isec);
  if ( imin == 0 && isec == 15 ) {
    cout << "Passed DoubleMinToIntMinSec(0.25, imin, isec) test" << endl;
  } else {
    cout << "Failed DoubleMinToIntMinSec(0.25, imin, isec) test\n"
         << "\timin = " << imin << " (should be 0)\n\tisec = " << isec
         << " (should be 15)" << endl;
  }

  imin = isec = -1;
  DoubleMinToIntMinSec(5.23, imin, isec);
  if ( imin == 5 && isec == 14 ) {
    cout << "Passed DoubleMinToIntMinSec(5.23, imin, isec) test" << endl;
  } else {
    cout << "Failed DoubleMinToIntMinSec(5.23, imin, isec) test\n"
         << "\timin = " << imin << " (should be 5)\n\tisec = " << isec
         << " (should be 14)" << endl;
  }

  return 0;
}

