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

  cout << "\n\n";
  Square s(5);
  cout << s << endl;
  s.SetLength(7);
  cout << s << "\nPerimeter: " << s.Perimeter() << "\nArea: " << s.Area()
       << endl;

  Rectangle r2(s);  // copy constructor for rectangle, sends s (a Square, which
                    // IS A Rectangle
  cout << r2 << endl;
  r2 = s;  // default memberwise copy of a rectangle (s is a Square which is a
           //                                         Rectangle);
  cout << r2 << endl;

  Square s2(r);
  cout << s2 << endl;
//  s2 = static_cast<Square>(r);
  s2 = r;
  cout << s2 << endl;

  return 0;
}








