// Copyright 2023 bhipp
// test functions implement in sept14functions.cc
#include<iostream>
using std::cout;
using std::endl;
// expected cpplint error message regarding using the full file path in the
// include statement below - ignore it
#include"sept14functions.h"

int main() {
  if ( !IsPrime(0) )
    cout << "Passed test IsPrime(0)" << endl;
  else
    cout << "Failed test IsPrime(0)" << endl;

  if ( !IsPrime(1) )
    cout << "Passed test IsPrime(1)" << endl;
  else
    cout << "Failed test IsPrime(1)" << endl;

  if ( IsPrime(2) )
    cout << "Passed test IsPrime(2)" << endl;
  else
    cout << "Failed test IsPrime(2)" << endl;

  if ( !IsPrime(13 * 11) )
    cout << "Passed test IsPrime(13 * 11)" << endl;
  else
    cout << "Failed test IsPrime(13 * 11)" << endl;

  if ( !IsPrime(-13 * 11) )
    cout << "Passed test IsPrime(-13 * 11)" << endl;
  else
    cout << "Failed test IsPrime(-13 * 11)" << endl;

  if ( IsPrime(13) )
    cout << "Passed test IsPrime(13)" << endl;
  else
    cout << "Failed test IsPrime(13)" << endl;
  return 0;
}

/*
int main() {
  cout << "Average(15, 18) = " << Average(15, 18) << endl;
  cout << "Average(15, 18, 19) = " << Average(15, 18, 19) << endl;

 cout << "ProgramAverage(6.3, 9.8, 9.7, 9.1, 8.8, 10) = "
      << ProgramAverage(6.3, 9.8, 9.7, 9.1, 8.8, 10) << endl;

 cout << "ProgramAverage(9.8, 9.7, 9.1, 8.8, 10) = "
      << ProgramAverage(9.8, 9.7, 9.1, 8.8, 10) << endl;
  return 0;
}
*/



/*
int main() {
  if ( GCD(49, 63) == 7 )
    cout << "Passed test GCD(49, 63) == 7" << endl;
  else
    cout << "Failed test GCD(49, 63) == 7" << endl;

  if ( GCD(0, 2) == 1 )
    cout << "Passed test GCD(0, 2) == 1" << endl;
  else
    cout << "Failed test GCD(0, 2) == 1" << endl;

  if ( GCD(100, 51) == 1 )     
    cout << "Passed test GCD(100, 51) == 1" << endl;
  else
    cout << "Failed test GCD(100, 51) == 1" << endl;

  if ( GCD( -32, 44 ) == 4 )
    cout << "Passed test GCD(-32, 44) == 4" << endl;
  else
    cout << "Failed test GCD(-32, 44) == 7" << endl;

  return 0;
}
*/
