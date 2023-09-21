// Copyright 2023 bhipp
// implement the functions with prototypes in sept12functions.h

// expected cpplint error message regarding the fact that we aren't giving the
// full path to the header file
#include"sept12functions.h"
#include<cmath>

double Square(double x) {
  x *= x;
  return x;
}

bool QuadraticFormula(double a, double b, double c, double& root1,
                      double& root2) {
  double disc = b * b - 4 * a * c;
  if ( disc < 0 ) {
    return false;
  } else {
    root1 = (-1 * b + sqrt(disc) ) / (2 * a);
    root2 = (-1 * b - sqrt(disc) ) / (2 * a);
  }
  return true;
}

int Factorial(int n) {
  if ( n < 0 )
    return 0;
  else if ( n == 0 )
    return 1;
  return n * Factorial(n - 1);  // inductive step / recursive call
}






