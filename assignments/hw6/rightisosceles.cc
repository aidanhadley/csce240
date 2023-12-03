//  Copyright 2023 hadleya
//  Implement function from rightisosceles.cc
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"rightisosceles.h"
#include"pixelshape.h"

namespace CSCE240_Program6 {
RightIsosceles::RightIsosceles(int l, char p) :
    PixelShape("right isosceles triangle", p), leg_(2) {
  SetLeg(l);
}

RightIsosceles::~RightIsosceles() {
  //  do i put anything here?
}

void RightIsosceles::SetLeg(int l) {
  if (l >= 2)
    leg_ = l;
}

RightIsosceles& RightIsosceles::operator *= (double n) {
  if (leg_ * n >= 2)
    leg_ *= n;
  return *this;
}

void RightIsosceles::Print(bool t) {
  PixelShape::Print(t);
  char c = GetPixel();
  for (int i = 1; i < leg_; ++i) {
    cout << c << " ";
    for (int j = 2; j < i; ++j) {
      if (t) {
        cout << c << " ";
      } else {
        cout << "  ";
      }
    }
    if ( i > 1)
      cout << c << " ";
    cout << endl;
  }
  for (int i = 1; i <= leg_; ++i)
    cout << c << " ";
  cout << endl;
}

}  //  namespace CSCE240_Program6
