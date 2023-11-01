// Copyright 2023 hadleya
// Define a Weight class that has private integer data members for the
//    weight value - a non-negative real number (a double)
//    weight units - allow for pounds, ounces, kilograms, and grams only
//                   (a string)
// The class should ensure that the data members always remain in a consistent
// state.
#ifndef _WEIGHT_H_
#define _WEIGHT_H_
#include<string>
using std::string;
#include<iostream>
using std::ostream;

class Weight {
  friend ostream& operator << (ostream& whereto, const Weight& w);
 public:
  // Add a constructor to allow the user to initialize the value and units, in
  // that order, with default arguments of 0 and "pounds"
  // If the first argument value is invalid, the weight value should be
  // initialized to 0. If the second argument is invalid, the weight units
  // should be initialized to pound.
  explicit Weight(double val = 0, string units = "pounds");

  // Add mutator functions SetValue, and SetUnits that set the data member if
  // the argument is valid, and leave the data member unchanged if the argument
  // is invalid.
  void SetValue(double new_value);
  void SetUnits(string new_units);


  // Add accessor functions GetValue and GetUnits that return a copy of the
  // value of the corresponding data member.
  double GetValue() const { return value_; };
  string GetUnits() const { return units_; };


  // Add a ConvertUnits function that takes a string parameter for units to
  // convert the Weight to. If the argument is valid, the object's value and
  // units should be updated to the equivalent weight in the new units. For
  // example, if the Weight object w has a value of 2 and units of "pounds"
  // then after the function call w.ConvertUnits("ounces"); w should have a
  // value of 32 and units of "ounces"
  // If the argument sent to the function is not "pounds" "ounces" "kilograms"
  // or "grams" then the function should leave the object unchanged.
  // Please see testweight2.cc for more examples.
  double ConvertUnits(string new_units);


  // overload the stream insertion operator to display the weight in the format
  // "value units"
  // For example,
  //   Weight w(3, "pounds");
  //   cout << w;  // should output "3 pounds" to the standard output device.
  // Please see testweight3.cc for additional examples
  
  // note: you are welcome to overload any other operators you would like
  bool operator > (const Weight& right_operand) const;
 private:
  double value_;
  string units_;
};
#endif
