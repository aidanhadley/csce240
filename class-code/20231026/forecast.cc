// Copyright 2023 bhipp
// Implement the functionality of the Forecast class
#include<iostream>
using std::ostream;
using std::cout;
using std::endl;
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

Forecast& Forecast::SetLow(const Temperature& l) {
  if (l > high_) {
    cout << l << " is higher than the current high temperature. Low "
         << "temperature is unchanged" << endl;  
  } else {
    low_ = l;
    high_.Convert(low_.GetUnits());
  }
  return *this;
}

Forecast& Forecast::SetHigh(const Temperature& h) {
  if (low_ < h) {
    cout << h << " is lower than the current low temperature. High "
         << "temperature is unchanged" << endl;
  } else {
    high_ = h;
    high_.Convert(low_.GetUnits);
  }
  reutnr *this;
}
