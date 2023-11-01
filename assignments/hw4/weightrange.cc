//  Copyright 2023 hadleya

#include<iostream>
using std::cout;
using std::endl;
#include"weightrange.h"
#include"weight.h"

//  default constructor
WeightRange::WeightRange() {
  low_ = Weight(0, "pounds");
  high_ = Weight(0, "pounds");
}

WeightRange::WeightRange(const Weight& w1, const Weight& w2) :
  low_(w1), high_(w2) {   //  what does this mean?
  if (w1 > w2) {
    low_ = w2;
    high_ = w1;
  }
}

WeightRange& WeightRange::SetSmallest(const Weight& s) {
  if (high_ > s) {
    low_ = s;
  }
  return *this;
}

WeightRange& WeightRange::SetLargest(const Weight& l) {
  if (l > low_) {
    high_ = l;
  }
  return *this;
}

bool WeightRange::InRange(const Weight& w, bool b) {
  //  don't modify the original one
  Weight w1 = w;
  //  make sure that everything is in the right units
  w1.ConvertUnits(low_.GetUnits());
  high_.ConvertUnits(low_.GetUnits());
  if (b) {  //  this means that the endpoints should be considered
    if ((w1.GetValue() < low_.GetValue()) 
      || (w1.GetValue() > high_.GetValue()))
      return false;
  } else {
    if ((w1.GetValue() <= low_.GetValue()) || (w1.GetValue() >= high_.GetValue())) 
      return false;
  }
  //  last set
  return true;
}

Weight WeightRange::Width() {
  //  convert units
  low_.ConvertUnits(high_.GetUnits());
  double w = high_.GetValue() - low_.GetValue();
  Weight result(w, high_.GetUnits());
  return result;
}
