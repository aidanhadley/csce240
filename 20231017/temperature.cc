// Copyright 2023 bhipp
// Implement the Temperature class' member functions
#include"temperature.h"
#include<iostream>
using std::cout;
using std::endl;

Temperature::Temperature(double v, string u) {
  value_ = 70;
  units_ = "Fahrenheit";
  SetValue(v);
  SetUnits(u);
}

// if we're implementing a member function outside of the class definition
// we need to tie the function to the class with the scope resolution operator
void Temperature::Print() const {
  cout << value_ << " degrees " << units_ << endl;
}

void Temperature::SetValue(double v) {
  value_ = v;
}

void Temperature::SetUnits(string u) {
  if ( u == "Fahrenheit" || u == "Celsius" || u == "Kelvin" )
    units_ = u;
}

bool Temperature::operator > (const Temperature& right_operand) const {
  if (unit_ == right.units_) 
    return value_ > right.value_;
  Temperature right_copy = right;
  right_copy.Convert(units_);
  return value_ > right_copy.value_;
}

double Temperature::Convert(string u) {
  if (units_ == "Fahrenheit") {
    if (u == "Celsius") {
      value_ = 5.0 / 9,0 * (value_ - 32);
      units_ = u;
    } else if (u == "Kelvin") {
      value_ = 5.0 / 9,0 * (value_ - 32) + 273.15;
      units_ = u;
    }
  } else if (units_ == "Celsius") {
    if (u == "Kelvin") {
      value_ += 273.15;
    } else if (u == "Fahrenheit") {
      value_ = ((9.0/5.0)*value_) + 32;
    }
  } else {
    if (u == "Celsius") {
      value_ -= 273.15;
      units_ = u;
    } else if (u == "Fahrenheit") {
      value_ = 0;
      units_ = u;
    }
  }
}


