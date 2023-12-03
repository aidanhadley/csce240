// Copyright 2023 bhipp
// define the Temperature class
#ifndef _TEMPERATURE_H_
#define _TEMPERATURE_H_

#include<string>
using std::string;

class Temperature {
// Google Style: public, protected, private - one space indent
 public:
  // constructor
  // default constructor - called with no arguments
  // if the constructor CAN take one argument, we'll make it explicit so
  // that objects are only created when we ask for them
  explicit Temperature(double val = 70, string units = "Fahreneit");
  // const on the end of the function's prototype makes this a constant
  // member function - it can't modify any of the class variables
  void Print() const;  // output the values of the private data members to the
                       // standard output device

  // mutator for the value
  void SetValue(double new_value);
  void SetUnits(string new_units);
  
  // accessor for the value
  double GetValue() const { return value_; }
  string GetUnits() const { return units_; }

  //  member function to convert to a different temp unit
  
  double Convert(string new_units);

  bool operator > (const Temperature& right_operand) const;

 private:
  double value_;  // Google Style - private data member names end with
                  //                underscore
  string units_;  // Composition - using object(s) of one class as data
                  //               members of another class
                  //               "has a" relationship
};

#endif
