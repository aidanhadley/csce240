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

 private:
  // we'll keep the low and high in the same units
  // we'll ensure that low_ is always <= high_
  Temperature low_;
  Temperature high_;
};

#endif


