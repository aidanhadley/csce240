// Copyright 2023 bhipp
// prototypes for example functions written in class on 9/12/2023

// expected cpplint errors for not using the full path to this file in the
// ifndef / define statements
#ifndef _SEPT12FUNCTIONS_H_
#define _SEPT12FUNCTIONS_H_

// compute the square of a number
double Square(double x);

// function to find the roots of a quadratic polynomial
// expected cpplint complaint about the non-const reference parameters
bool QuadraticFormula(double a, double b, double c, double& root1,
                      double& root2);

int Factorial(int n);

#endif  // _SEPT12FUNCTIONS_H_
