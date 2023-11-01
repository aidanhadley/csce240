// Copyright 2023 bhipp
// define the Temperature class
#ifndef _TEMPERATURE_H_
#define _TEMPERATURE_H_

#include<string>
using std::string;
#include<iostream>
using std::ostream;

class Temperature {
  // to make a friend - use the keyword friend and state the thing
  friend ostream& operator << (ostream& whereto, const Temperature& t);

// Google Style: public, protected, private - one space indent
 public:
  // constructor
  // default constructor - called with no arguments
  // if the constructor CAN take one argument, we'll make it explicit so
  // that objects are only created when we ask for them
  explicit Temperature(double val = 70, string units = "Fahrenheit");

  // destructor
  // name: ~nameOfClass
  // return type: none
  // parameters: none
  // we don't have any additional housecleaning to do when an object is freed
  // we have no pointers as data members
  // so we don't have to write a destructor for our class
  // ~Temperature();

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

  // member function to convert to a different temperature unit -
  // modifies the value_ and units_ data members as necessary
  double Convert(string new_units);

  bool operator > (const Temperature& right_operand) const;

  // pre-increment operator    ++x
  Temperature operator ++();
  // post-increment operator   x++
  Temperature operator ++(int);

  string ToString() const { return std::to_string(value_) + " " + units_; }

 private:
  double value_;  // Google Style - private data member names end with
                  //                underscore
  string units_;  // Composition - using object(s) of one class as data
                  //               members of another class
                  //               "has a" relationship
};

#endif
