// Copyright 2023 bhipp
// implement the functionality of our Rectangle class
#include<iostream>
using std::ostream;
#include"rectangle.h"

namespace csce240_fall23_shapes {

Rectangle::Rectangle(double l, double w) : length_(1), width_(1) {
  SetLength(l);
  SetWidth(w);
}

bool Rectangle::SetLength(double l) {
  if ( l > 0 )
    length_ = l;
  return length_ == l;
}

bool Rectangle::SetWidth(double w) {
  if ( w > 0 )
    width_ = w;
  return width_ == w;
}

double Rectangle::Perimeter() const {
  return 2 * length_ + 2 * width_;
}

double Rectangle::Area() const {
  return length_ * width_;
}

ostream& operator << (ostream& whereto, const Rectangle& r) {
  whereto << "length: " << r.length_ << ", width: " << r.width_;
  return whereto;
}

}  // end namespace csce240_fall23_shapes
