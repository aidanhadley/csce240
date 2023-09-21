// Copyright 2023 bhipp
// header file containing the prototypes for example functions written in
// class on 9/14/23
// expected cpplint messages regarding use of the file path in the preprocessor
// directives - ignore those
#ifndef _SEPT14FUNCTIONS_H_
#define _SEPT14FUNCTIONS_H_

// greatest common divisor
int GCD(int, int);

// overloaded function Average - multiple functions with the same name but
// distinct parameter lists
// compute the average of two integers
double Average(int, int);
// compute the average of three integers
double Average(int, int, int);

// program average function
// this function could be called with anywhere from 0 to 6 doubles
double ProgramAverage(double = 0, double = 0, double = 0, double = 0,
                      double = 0, double = 0);
// can't create a function with the prototype below since it's not distinct
// from the one above
// double ProgramAverage();

// function to determine whether or not an integer is prime
bool IsPrime(int);

#endif
