// Copyright 2023 bhipp
// Define the Square class as a child of the Rectangle class
#ifndef _SQUARE_H_
#define _SQUARE_H_

#include"rectangle.h"

namespace csce240_fall23_shapes {

class Square : public Rectangle {
 public:
  explicit Square(double s = 1);
  explicit Square(const Rectangle& r);

  Square& operator = (const Rectangle& r);
  // redefining the SetLength
  bool SetLength(double s);
  // redefine the SetWidth function
  bool SetWidth(double s);
};

}  // end namespace csce240_fall23_shapes

#endif
