// Copyright 2023 bhipp
// Sample tests for the IsPalindrome function
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"program2functions.h"

int main() {
  if ( !IsPalindrome(135) ) {
    cout << "Passed IsPalindrome(135) test" << endl;
  } else {
    cout << "Failed IsPalindrome(135) test" << endl;
  }

  if ( IsPalindrome(262) ) {
    cout << "Passed IsPalindrome(262) test" << endl;
  } else {
    cout << "Failed IsPalindrome(262) test" << endl;
  }

  if ( IsPalindrome(190091) ) {
    cout << "Passed IsPalindrome(190091) test" << endl;
  } else {
    cout << "Failed IsPalindrome(190091) test" << endl;
  }

  if ( IsPalindrome(-55) ) {
    cout << "Passed IsPalindrome(-55) test" << endl;
  } else {
    cout << "Failed IsPalindrome(-55) test" << endl;
  }
  return 0;
}

