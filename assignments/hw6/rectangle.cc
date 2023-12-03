//  Copyright 2023 hadleya
//  Implement function from rectangle.h
#include<iostream>
#include<string>
#include"rectangle.h"
#include"pixelshape.h"
using std::cout;
using std::endl;
using std::string;

namespace CSCE240_Program6 {
Rectangle::Rectangle(int l, int w, char p) : PixelShape("rectangle", p),
    length_(2), width_(1) {
  SetLength(l);
  SetWidth(w);
}

Rectangle::~Rectangle() {
  //  hmm empty for now
}

void Rectangle::SetLength(int l) {
  if (l > 0)
    length_ = l;
}

void Rectangle::SetWidth(int w) {
  if (w > 0)
    width_ = w;
}

Rectangle& Rectangle::operator *= (double n) {
  if (length_ * n >= 1 && width_ * n >= 1) {
    length_ *= n;
    width_ *= n;
  }
  return *this;
}

void Rectangle::Print(bool t) {
  PixelShape::Print(t);
  char c = GetPixel();
  //  print first line
  for (int i = 0; i < width_; ++i) {
    cout << c << " ";
  }
  cout << endl;
  //  print middle line(s)
  for (int i = 0; i < length_ - 2; ++i) {
    cout << c << " ";
    for (int j = 1; j < width_ - 1; ++j) {
      if (t) {
        cout << c << " ";
      } else {
        cout << "  ";
      }
    }
    if (width_ > 1)
      cout << c << " ";
    cout << endl;
  }
  //  print end line
  if (length_ > 1) {
      for (int i = 0; i < width_; ++i) {
      cout << c << " ";
    }
    cout << endl;
  }
}


}  //  namespace CSCE240_Program6

