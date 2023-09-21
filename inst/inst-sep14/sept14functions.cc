// Copyright 2023 bhipp
// implement the functions that have prototypes in sept14functions.h
// expected cpplint error message regarding using the full file path in the
// include statement below - ignore it
#include"sept14functions.h"
#include<cmath>

int GCD(int n, int m) {
  n = abs(n);  // get absolute values of the arguments so the GCD is always > 0
  m = abs(m);
  if ( m == 0 || n == 0 )  // special case - can't divide by 0 - GCD of 0 and
                           //                anything is 1
    return 1;
  if ( n % m == 0 )
    return m;
  else
    return GCD(m, n % m);
}

double Average(int x, int y) {
  return (x + y) / 2.0;
}

double Average(int x, int y, int z) {
  return (x + y + z) / 3.0;
}

double ProgramAverage(double p1, double p2, double p3, double p4, double p5,
                      double p6 ) {
  double min = p1;
  if ( p2 < min ) min = p2;
  if ( p3 < min ) min = p3;
  if ( p4 < min ) min = p4;
  if ( p5 < min ) min = p5;
  if ( p6 < min ) min = p6;
  return (p1 + p2 + p3 + p4 + p5 + p6 - min) / 5.0;
}

// implementation for the IsPrime function
bool IsPrime(int n) {
  n = abs(n);
  if ( n < 2 )
    return false;
  bool found_divisor = false;
  for ( int i = 2; i < n && !found_divisor; ++i )
    found_divisor = n % i == 0;
  return !found_divisor;
}

