// Copyright 2023 bhipp
// Initial sample tests for the ModeInCol functon written for
// CSCE240 Programming Assignment 3
#include<iostream>
using std::cout;
using std::endl;
#include"program3functions.h"
#include"checkArraysMatch.h"

int main() {
  const int kRows = 4;
  double x[kRows][10] = {{1.2, 8.7, 4.1, 6.7, 7.1, 0.7, 0.3, 9.4, 6.4, 5.2},
                         {2.9, 2.4, 2.3, 2.1, 1.9, 3.4, 0.6, 1.8, 1.7, 2.2},
                         {5.7, 8.7, 2.3, 7.2, 3.3, 2.1, 1.6, 4.4, 5.5, 6.6},
                         {0.5, 3.5, 4.1, 1.6, 2.5, 3.9, 0.5, 1.8, 5.6, 5.2}};
  double y[2] = {-1, -1};

  if ( ModeInCol(x, kRows, 3, y) == 0 && y[0] == -1 && y[1] == -1 ) {
    cout << "Passed example test ModeInCol(x, 4, 3, y)" << endl;
  } else {
    cout << "Failed example test ModeInCol(x, 4, 3, y). Function returned "
         << ModeInCol(x, kRows, 3, y) << ", expected 0. y[0] is " << y[0]
         << ", should be -1. y[1] is " << y[1] << ", should be -1" << endl;
  }

  y[0] = y[1] = -2;
  if ( ModeInCol(x, kRows, 9, y) == 1 && y[0] == 5.2 && y[1] == -2 ) {
    cout << "Passed example test ModeInCol(x, 4, 9, y)" << endl;
  } else {
    cout << "Failed example test ModeInCol(x, 4, 9, y). Function returned "
         << ModeInCol(x, kRows, 9, y) << ", expected 1. y[0] is " << y[0]
         << ", should be 5.2. y[1] is " << y[1] << ", should be -2" << endl;
  }

  y[0] = y[1] = -3;
  if ( ModeInCol(x, kRows, 2, y) == 2 && ((y[0] == 2.3 && y[1] == 4.1) ||
                                          (y[0] == 4.1 && y[1] == 2.3)) ) {
    cout << "Passed example test ModeInCol(x, 4, 2, y)" << endl;
  } else {
    cout << "Failed example test ModeInCol(x, 4, 2, y). Function returned "
         << ModeInCol(x, kRows, 2, y) << ", expected 2. y[0] is " << y[0]
         << " and y[1] is " << y[1] << " One should be 2.3 and the other 4.1"
         << endl;
  }

  return 0;
}
