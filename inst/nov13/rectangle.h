// Copyright 2023 bhipp
// define a Rectangle class (part of our shape family of classes)
#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include<iostream>
using std::ostream;

namespace csce240_fall23_shapes {

class Rectangle {
  friend ostream& operator << (ostream& whereto, const Rectangle& r);
 public:
  explicit Rectangle(double l = 1, double w = 1);
  // accessor
  double GetLength() const { return length_; }
  double GetWidth() const { return width_; }
  // mutators
  bool SetLength(double l);
  bool SetWidth(double w);

  double Perimeter() const;
  double Area() const;

 private:
  double length_;
  double width_;
};

}  // end namespace csce240_fall23_shapes

#endif
