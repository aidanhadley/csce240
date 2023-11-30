// Copyright 2023 bhipp
// Define a Polynomial class - with non-negative integer exponents and
//                             real coefficients
#ifndef _POLYNOMIAL_H_
#define _POLYNOMIAL_H_

#include<iostream>
using std::ostream;

class Polynomial {
  friend ostream& operator << (ostream&, const Polynomial&);

 public:
  explicit Polynomial(int degree = 2);

  // Since we have a pointer as a data member, we need to implement the
  // following three functions
  // 1) Copy constructor
  Polynomial(const Polynomial&);
  // 2) overload the assignment operator
  Polynomial& operator = (const Polynomial&);
  // returns a polynomial so that x = y = z = w;
  // 3) Destructor
  ~Polynomial();

  // overload the [] operator to provide the coefficient of the ith term
  double& operator[] (int exp);
  double operator[] (int exp) const;

  // Evaluate
  double Evaluate(double x) const;

  // addition
  Polynomial operator + (const Polynomial& right) const;

  // static accessor and mutator functions for our static data member
  // note: static functions belong to the class - have no this pointer -
  //       can't access non-static members - can't be const
  static char GetVariable() { return the_variable_; }
  static void SetVariable(char variable);

 private:
  int degree_;
  double * coefficients_;

  // static data member - one variable for the entire class (not a separate
  // one for each object
  static char the_variable_;
};

#endif

