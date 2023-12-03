//  Copyright 2023 hadleya
//  Define RightIsosceles, a child of the PixelShape class
#include"pixelshape.h"

#ifndef _RIGHTISOSCELES_H_
#define _RIGHTISOSCELES_H_

namespace CSCE240_Program6 {
class RightIsosceles : public PixelShape {
 private:
  int leg_;
 public:
  //  constructor
  explicit RightIsosceles(int l = 2, char p = '*');
  //  virtual destructor
  virtual ~RightIsosceles();
  //  mutator
  void SetLeg(int l);
  //  accessor
  int GetLeg() { return leg_; }
  //  special functions
  virtual RightIsosceles& operator *= (double n);
  virtual void Print(bool t = true);
};
}  //  namespace CSCE240_Program6
#endif  //  end _RIGHTISOSCELES_H_
