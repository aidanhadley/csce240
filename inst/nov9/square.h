// Copyright 2023 bhipp
// Define the Square class as a child of the Rectangle class
#ifndef _SQUARE_H_
#define _SQUARE_H_

#include"rectangle.h"

namespace csce240_fall23_shapes {

class Square : public Rectangle {
 public:
  // redefining the SetLength
  bool SetLength(double s) {
    Rectangle::SetLength(s);
    return Rectangle::SetWidth(s);
  }
};

}  // end namespace csce240_fall23_shapes

#endif
