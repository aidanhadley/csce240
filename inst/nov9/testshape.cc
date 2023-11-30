// Copyright 2023 bhipp
// test drive the shape functionality
#include<iostream>
using std::cout;
using std::endl;
#include"rectangle.h"
#include"square.h"
using namespace csce240_fall23_shapes;

int main() {
  Rectangle r;
  cout << r << endl;
  r.SetLength(4);
  r.SetWidth(9);
  cout << r << "\nPerimeter: " << r.Perimeter() << "\nArea: " << r.Area()
       << endl;

  Square s;
  cout << s << endl;
  s.SetLength(7);
  cout << s << "\nPerimeter: " << s.Perimeter() << "\nArea: " << s.Area()
       << endl;

  return 0;
}








