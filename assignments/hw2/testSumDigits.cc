// Copyright 2023 bhipp
// Sample tests for the testSumDigits function
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"  // expected cpplint error message

int main() {
  if ( SumDigits(0) == 0 ) {
    cout << "Passed SumDigits(0) == 0 test" << endl;
  } else {
    cout << "SumDigits(0) returned " << SumDigits(0)
         << " instead of the expected value of 0" << endl;
  }

  if ( SumDigits(1231) == 7 ) {
    cout << "Passed SumDigits(1231) == 7 test" << endl;
  } else {
    cout << "SumDigits(1231) returned " << SumDigits(1231)
         << " instead of the expected value of 7" << endl;
  }

  if ( SumDigits(50748) == 24 ) {
    cout << "Passed SumDigits(50748) == 24 test" << endl;
  } else {
    cout << "SumDigits(50748) returned " << SumDigits(50748)
         << " instead of the expected value of 24" << endl;
  }

  if ( SumDigits(-32) == 5 ) {
    cout << "Passed SumDigits(-32) == 5 test" << endl;
  } else {
    cout << "SumDigits(-32) returned " << SumDigits(-32)
         << " instead of the expected value of 5" << endl;
  }

  return 0;
}

