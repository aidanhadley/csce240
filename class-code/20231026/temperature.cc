// Copyright 2023 bhipp
// Implement the Temperature class' member functions
#include"temperature.h"
#include<iostream>
using std::cout;
using std::endl;
using std::ostream;

ostream& operator << (ostream& whereto, const Temperature& t ) {
  whereto << t.value_ << " degrees " << t.units_;
  return whereto;
}

/*
Temperature::~Temperature() {
  cout << "Destructor called for " << value_ << " " << units_ << endl;
}
*/

/*
double value_ = 70;
string units_ = "Fahrenheit";

double value_;
value_ = 70;
string units_;
units_ = "Fahrenhiet";
*/
Temperature::Temperature(double v, string u) : value_(70),
                                               units_("Fahrenheit") {
//  value_ = 70;
//  units_ = "Fahrenheit";
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

bool Temperature::operator > (const Temperature& right) const {
  // this->units_    (*this).units
  if ( units_ == right.units_ )
    return value_ > right.value_;

  // the line below copies the values of right's data members into right_copy's
  // data members by default - that is ok since we have no pointers as data
  // members
  Temperature right_copy = right;
  right_copy.Convert(units_);
  return value_ > right_copy.value_;
}

double Temperature::Convert(string u) {
  if ( units_ == "Fahrenheit" ) {
    if ( u == "Celsius" ) {
      value_ = 5.0 / 9.0 * (value_ - 32);
      units_ = u;
    } else if ( u == "Kelvin" ) {
      value_ = 5.0 / 9.0 * (value_ - 32) + 273.15;
      units_ = u;
    }
  } else if ( units_ == "Celsius" ) {
    if ( u == "Kelvin" ) {
      value_ += 273.15;
      units_ = u;
    } else if ( u == "Fahrenheit" ) {
      value_ = 9.0 / 5.0 * value_ + 32;
      units_ = u;
    }
  } else {  // units is currently Kelvin if ( units_ == "Kelvin" )
    if ( u == "Celsius" ) {
      value_ -= 273.15;
      units_ = "Celsius";
    } else if ( u == "Fahrenheit" ) {
      value_ = 9.0 / 5.0 * (value_ - 273.15) + 32;
      units_ = u;
    }
  }
  return value_;
}

// pre-increment
Temperature Temperature::operator ++() {
  value_ += 1;
  return *this;  // returns a copy of the updated Temperature object
}

// post-increment
Temperature Temperature::operator ++(int) {
  value_ += 1;
  return Temperature(value_ - 1, units_);
}







