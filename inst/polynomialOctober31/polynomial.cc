// Copyright 2023 bhipp
// implement the functionality of the Polynomial class
#include<iostream>
using std::ostream;
#include<cmath>
#include"polynomial.h"

char Polynomial::the_variable_ = 'x';

void Polynomial::SetVariable(char variable) {
  if ( variable >= 'a' && variable <= 'z' )
    the_variable_ = variable;
}

Polynomial::Polynomial(int degree) : degree_(2) {
  if ( degree >= 0 ) {
    degree_ = degree;
  }
  coefficients_ = new double[degree_ + 1];
  coefficients_[degree_] = 1;
  for ( int i = 0; i < degree_; ++i )
    coefficients_[i] = 0;
}


Polynomial::Polynomial(const Polynomial& tocopy) {
  degree_ = tocopy.degree_;
//  coefficients_ = tocopy.coefficients_;
  coefficients_ = new double[degree_ + 1];
  for ( int i = 0; i <= degree_; ++i )
    coefficients_[i] = tocopy.coefficients_[i];
}


Polynomial& Polynomial::operator = (const Polynomial& right) {
  // special case x = x (self assignment should make no changes)
  if ( coefficients_ == right.coefficients_ )
    return *this;
  degree_ = right.degree_;
  delete [] coefficients_;
  coefficients_ = new double[degree_ + 1];
  for ( int i = 0; i <= degree_; ++i )
    coefficients_[i] = right.coefficients_[i];
  return *this;
}

Polynomial::~Polynomial() {
  delete [] coefficients_;
}

Polynomial Polynomial::operator + (const Polynomial& right) const {
  int max = degree_ > right.degree_ ? degree_ : right.degree_;
  Polynomial sum(max);
  for ( int i = 0; i <= max; ++i ) {
    sum.coefficients_[i] = 0;
    if ( i <= degree_ )
      sum.coefficients_[i] += coefficients_[i];
    if ( i <= right.degree_ )
      sum.coefficients_[i] += right.coefficients_[i];
  }
  return sum;
}

//  2x^3 + 0x^2 + 4x + 1
//  coefficients_ 1, 4, 0, 2
//  Evaluate(2)
//    2 * (2^3) + 0 (2^2) + 4*2 + 1
double Polynomial::Evaluate(double x) const {
  double answer = 0;
  for ( int i = 0; i <= degree_; ++i )
    answer += coefficients_[i] * pow(x, i);
  return answer;
}

double Polynomial::operator[] (int exp) const {
  if ( exp < 0 || exp > degree_ )
    return 0;
  return coefficients_[exp];
}

double& Polynomial::operator[] (int exp) {
  if ( exp < 0 )
    exp = 0;
  // expand the polynomial if the exp is greater than the degree
  if ( exp > degree_ ) {
    // make new space
    double * temp = new double[exp + 1];
    // copy the old coefficents over
    for ( int i = 0; i <= degree_; ++i )
      temp[i] = coefficients_[i];
    for ( int i = degree_ + 1; i <= exp; ++i )
      temp[i] = 0;
    // delete the old block
    delete [] coefficients_;
    // assign coefficients to the new block
    coefficients_ = temp;
    degree_ = exp;
  }
  return coefficients_[exp];
}


ostream& operator << (ostream& whereto, const Polynomial& p ) {
  for ( int exponent = p.degree_; exponent > 0; --exponent )
    whereto << p.coefficients_[exponent] << Polynomial::the_variable_
            << "^" << exponent << " + ";
  whereto << p.coefficients_[0];
  return whereto;
}




