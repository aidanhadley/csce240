//  Copyright 2023 hadleya
//  implement the functions from oct3functions.h
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
using std::setprecision;
using std::setiosflags;
#include"oct3functions.h"

void PrintArray(const double numbers[][kCols], int numRows) {
  cout << setiosflags(std::ios::fixed | std::ios::showpoint)
       << setprecision(1);
  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j<kCols; ++j) {
      cout << setw(5) << numbers[i][j];
    }
    cout << endl;
  }
}