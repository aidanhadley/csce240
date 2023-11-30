// Copyright 2023 bhipp
// test drive the Polynomial class
#include<iostream>
using std::cout;
using std::endl;
#include"polynomial.h"

int main() {
  Polynomial::SetVariable('z');

  Polynomial p(3);
  p[3] = 2;
  p[1] = 4;
  p[0] = 1;
  cout << p << endl;
  cout << "p(2) = " << p.Evaluate(2) << endl;

  Polynomial p2(5);
  p2[3] = 6;
  p2[2] = 5;
  cout << p << "\n+\n" << p2 << "\n=\n" << p + p2 << endl;

/*  Polynomial p(3);
  Polynomial p2 = p;  // exactly the same as Polynomial p2(p); - calls the
                      // copy constructor, NOT the assignment operator we
                      // overloaded

  p[8] = 7;
  cout << "p = " << p << "\np2 = " << p2 << endl;
  Polynomial p3(5);
  p3 = p;  // this calls the overloaded assignment operator (not the copy 
           // constructor)
  p3[1] = 8;
  cout << "p = " << p << "\np3 = " << p3 << endl;

  const Polynomial x(1);
  cout << x[1] << endl;
*/
  return 0;
}
