// Copyright 2023 hadleya
#include<string>
using std::string;
#include<iostream>
using std::ostream;
#include"weight.h"

ostream& operator << (ostream& whereto, const Weight& w ) {
  whereto << w.value_ << " " << w.units_;
  return whereto;
}

Weight::Weight(double val, string units) : value_(0), units_("pounds") {
  SetValue(val);
  SetUnits(units);
}

void Weight::SetValue(double val) {
  value_ = val;
  if (val < 0)
    value_ = 0;
}

void Weight::SetUnits(string units) {
  if ( units == "pounds" || units == "ounces" || units == "kilograms" || units == "grams")
    units_ = units;
}

double Weight::ConvertUnits(string new_units) {
  //  pounds
  if (units_ == "pounds") {
    if (new_units == "ounces") {
    //  ounces
      value_ *= 16;
      units_ = new_units;
    } else if (new_units == "kilograms") {
    //  kilos
      value_ /= 2.2046;  //  i had to google this number
      units_ = new_units;
    } else if (new_units == "grams") {
    //  grams
      value_ *= 453.5924;   //  this was wrong, so i dide more research ig
      units_ = new_units;
    }
  }
  //  ounces
  else if (units_ == "ounces") {
    if (new_units == "pounds") {
    //  pounds
      value_ /= 16;
      units_ = new_units;
    } else if (new_units == "kilograms") {
    //  kilos
      value_ /= 35.274;  //  had to look this one up too, hopefully it's right
      units_ = new_units;
    } else if (new_units == "grams") {
    //  grams
      value_ /= 35.274;
      value_ *= 1000;
      units_ = new_units;
    }
  }
  //  kilos
  else if (units_ == "kilograms") {
    if (new_units == "pounds") {
    //  pounds
      value_ *= 2.2046;
      units_ = new_units;
    } else if (new_units == "ounces") {
    //  ounces
      value_ *= 35.274;
      units_ = new_units;
    } else if (new_units == "grams") {
    //  grams      
      value_ *= 1000;
      units_ = new_units;

    }
  }
  //  else, it's grams
  else {
    if (new_units == "pounds") {
    //  pounds
      value_ /= 1000;
      value_ *= 2.2046;
      units_ = new_units;
    } else if (new_units == "ounces") {
    //  ounces
      value_ /= 1000;
      value_ *= 35.274;
      units_ = new_units;
    } else if (new_units == "kilograms") {
    //  kilos
      value_ /= 1000;
      units_ = new_units;
    }
  }
  return value_;
}


  bool Weight::operator > (const Weight& right) const {
  if ( units_ == right.units_ )
    return value_ > right.value_;
  
  Weight right_copy = right;
  right_copy.ConvertUnits(units_);
  return value_ > right_copy.value_;
}