//  Copyright 2023 hadleya
//  prototypes for example functions written in class on 9/12/23

//  expected cpplint error for not using the full path to this file in the
//  ifndef / define statements
#ifndef _SEPT12FUNCTIONS_H_
#define _SEPT12FUNCTIONS_H_

//  compute the square of a number
double Square(double& x);

// function to find the roots of a quadratic polynomial
bool QuadraticFormula(double a, double b, double c, double& root1, 
                      double& root2);

#endif  // _SEPT12FUNCTIONS_H_
