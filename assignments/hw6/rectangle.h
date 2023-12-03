//  Copyright 2023 hadleya
//  Define rectangle as part of PixelShape
#include"pixelshape.h"

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

namespace CSCE240_Program6 {
class Rectangle : public PixelShape {
 public:
  //  constructor
  explicit Rectangle(int l = 2, int w = 1, char p = '*');
  //  destructor
  virtual ~Rectangle();
  //  mutators
  void SetLength(int l);
  void SetWidth(int w);
  //  accessors
  int GetLength() { return length_; }
  int GetWidth() { return width_; }
  //  specials
  virtual Rectangle& operator *= (double n);
  virtual void Print(bool t = true);
 private:
  int length_;
  int width_;
};
}  //  namespace CSCE240_Program6
#endif  //  end _RECTANGLE_H_
