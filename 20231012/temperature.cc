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



double Temperature::Convert(string u) {
  if (units == "Fahrenheit") {
    if (u == "Celsius") {
      value_ = 5.0 / 9,0 * (value_ - 32);
      units_ = u;
    } else if ( u == "Kelvin") {
      value_ = 5.0 / 9,0 * (value_ - 32) + 273.15;
      units_ = u;
    }
  } else if (units_ == "Celsius") {
    if (u == "Kelvin") {
      value_ += 273.15;
    } else if (u == "Fahrenheit") {
      value_ = ((9.0/5.0)*value_) + 32;
    }
  } else if (units_ == Kelvin) {
    if (u == "Celsius") {
      value_ -= 273.15;
      units_ = u;
    } else if (u == Fahrenheit) {
      value_ = 0;
      units_ = u;
    }
  }
}
