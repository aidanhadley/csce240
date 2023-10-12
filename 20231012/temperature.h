//  Copyright 2023 hadleya
//  define the Temperature class
#ifndef _TEMPERATURE_H_
#define _TEMPERATURE_H_

#include<string>
using std::string;

class Temperature {
//  google syle guide says 1 space indent for publiv and private
 public:
  //  constructor
  //  default constructor
  Temperature();
  void Print();  //   outputs the calues of the private data members to the
                 //   standard output device

 private:
  double value_;  //  google style guide says priavtes end with an underscore

  string units_;  //  composition - using objects in one class as data members
                  //  in another class
                  //  "has a" relationship
};

#endif
