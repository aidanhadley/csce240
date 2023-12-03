//  Copyright 2023 hadleya
//  Implement functions from pixelshape.h
#include"pixelshape.h"
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

namespace CSCE240_Program6 {
PixelShape::PixelShape(string n, char p) : name_("?"), pixel_('*') {
  SetName(n);
  SetPixel(p);
}

PixelShape::~PixelShape() {
  //  destructor code here
}

void PixelShape::SetName(string n) {
  if (n != "")
    name_ = n;
}

void PixelShape::SetPixel(char p) {
  if (p >= 33 && p <= 126)
    pixel_ = p;
}

void PixelShape::Print(bool t) {  //  CPPLINT ERROR WAAAAAGH
  cout << name_ << endl;
}

PixelShape& PixelShape::operator *= (double n) {
  return *this;
}

}  //  namespace CSCE240_Program6

