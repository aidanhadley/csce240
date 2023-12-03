// Copyright 2023 bhipp
// Define the Forecast class
#ifndef _FORECAST_H_
#define _FORECAST_H_

#include<iostream>
using std::ostream;
#include"temperature.h"

class Forecast {
  friend ostream& operator << (ostream&, const Forecast&);

 public:
  Forecast(const Temperature& t1, const Temperature& t2);

  // accessor functions
  Temperature GetLow() const { return low_; }
  Temperature GetHigh() const { return high_; }

  // mutator functions
  // we're writing these to return references to the object it's called on
  // to allow cascading function calls x.SetLow(t).setHigh(t1)...
  Forecast& SetLow(const Temperature&);
  Forecast& SetHigh(const Temperature&);

 private:
  // we'll keep the low and high in the same units
  // we'll ensure that low_ is always <= high_
  Temperature low_;
  Temperature high_;
};

#endif


