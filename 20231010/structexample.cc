//  Copyright 2023 hadleya
//  first structure example
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//  define/declare a structure
struct Point{
  //  x and y are public members of our structure type
  double x;
  double y;
};

//  note: using a reference parameter saves space!
void PrintPoint(Point& p) {
  cout << "(" << p.x << "," << p.y << ")" << endl;
  // p.x *= 7;
}

int main() {
  Point my_point;
  //  accessed through . operator
  my_point.x = 5.7;
  my_point.y = -8.2;
  PrintPoint(my_point);
  PrintPoint(my_point);

  Point * point_pointer = &my_point;
  cout << (*point_pointer).x << endl;
  cout << point_pointer->x << endl; //  arrow operator used on a pointer to
                                    //  access public members at the address
}
