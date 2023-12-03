//  Copyright 2023 hadleya
//  Header file for pixelshape.h
#ifndef _PIXELSHAPE_H_
#define _PIXELSHAPE_H_

#include<string>
using std::string;

namespace CSCE240_Program6 {
class PixelShape {
 private:
  string name_;
  char pixel_;
 public:
  //  constructor
  explicit PixelShape(string n = "?", char p = '*');
  //  virtual destructor
  virtual ~PixelShape();
  //  mutators
  void SetName(string n);
  void SetPixel(char p);
  //  accessors
  string GetName() { return name_; }
  char GetPixel() { return pixel_; }
  //  special functions
  virtual void Print(bool t = true);   //  bool is to fill interior of shape
  virtual PixelShape& operator *= (double n);
};
}  //  namespace CSCE240_Program6
#endif  //  end _PIXELSHAPE_H_
