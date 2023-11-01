// Copyright 2023 hadleya
// implement the functionality of the Polynomial class
#include<iostream>
using std::ostream;
#include"polynomial.h"

Polynomial::Polynomial(int degree) : degree_(2) {
  if (degree >= 0) {
    degree_ = degree;
  }
  coefficients_ = new double[degree_ + 1];
  coefficients_[degree_] = 1;
  for (int i = 0; i < degree_; ++i)
    coefficients_[i] = 0;
}

ostream& operator << (ostream& whereto, const Polynomial& p) {
  for (int exponent = p.degree; exponent > 0; --exponent) 
    whereto << p.coefficients_[exponent] << "x^" << exponent << " + ";
  whereto << p.coefficients_[0];
  return whereto;
}