// Copyright 2023 bhipp
// Implement the functionality of the Forecast class
#include<iostream>
using std::ostream;
#include"forecast.h"
#include"temperature.h"

ostream& operator << (ostream& whereto, const Forecast& f) {
  whereto << "low: " << f.low_ << ", high: " << f.high_;
  return whereto;
}

// with the constructor we can add member initializer list
// between the parameter list and the implementation, used to initialize
// data members (constructor calls for objects) before the body of the
// constructor executes
Forecast::Forecast(const Temperature& t1, const Temperature& t2) :
  low_(t1), high_(t2) {
  if ( t1 > t2 ) {
    low_ = t2;
    high_ = t1;
  }
  high_.Convert(low_.GetUnits());
}




