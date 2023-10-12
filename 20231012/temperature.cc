//  Copyright 2023 hadleya
//  Implement the Temperature class
#include"temperature.h"
#include<iostream>
using std::cout;
using std::endl;

Temperature::Temperature() {
  value_ = 70;
  units_ = "Fahrenheit";
}

//  if we're implementing a member function outside of the class definition
//  we need to tie the function to the class with the SCOPE resolution operator
void Temperature::Print() {
  cout << value_ << " degrees " << units_ << endl;
}
