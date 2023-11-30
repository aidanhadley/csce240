// Copyright 2023 bhipp
// define the functionality of the Square
#include<iostream>
using std::cout;
using std::endl;
#include"rectangle.h"
#include"square.h"

namespace csce240_fall23_shapes {

// upgrade constructor
Square::Square(const Rectangle& r) : Rectangle(r.GetLength(), r.GetLength() ) {
  if ( r.GetWidth() < r.GetLength() )
    SetLength(r.GetWidth());
}

// upgrade assignment
Square& Square::operator = (const Rectangle& r) {
  double small = r.GetWidth() < r.GetLength() ? r.GetWidth() : r.GetLength();
  SetLength(small);
  return *this;
}

// call the base class' constructor in the way we want in the member
// initializer list
Square::Square(double s) : Rectangle(s, s) {
  cout << "Square(" << s << ") was called" << endl;
}

bool Square::SetLength(double s) {
  Rectangle::SetLength(s);
  return Rectangle::SetWidth(s);
}

bool Square::SetWidth(double s) {
  return SetLength(s);  // this calls the Square version of this function
}

}  // namespace csce240_fall23_shapes
