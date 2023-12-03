//  Copyright 2023 hadleya

#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include"pixelshape.h"
#include"rectangle.h"
#include"rightisosceles.h"
using CSCE240_Program6::PixelShape;
using CSCE240_Program6::RightIsosceles;
using CSCE240_Program6::Rectangle;

int main() {
  Rectangle r = Rectangle(10, 4);
  r.Print(true);
}
