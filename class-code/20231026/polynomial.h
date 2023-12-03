// Copyright 2023 hadleya
// Define a polynomial class - with non-negative integer exponents and
//                             real coeffients
#ifndef _POLYNOMIAL_H_
#define _POLYNOMIAL_H_

#include<iostream>
using std::ostream;

class Polynomial {
  friend ostream& operator << (ostream&, const Polynomial&);
 public:
  explicit Polynomial(int degreee = 2);
private:

 private:
  int degree_;
  double * coefficients;    
}


#endif
