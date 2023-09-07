//  Copyright 2023 hadleya
//  Implement functions from trianglestuff.h
#include"trianglestuff.h"

bool IsTriangle(double x, double y, double z) {
    return (x > 0 && y > 0 && z > 0 && (x + y > z) && (x + z > y) && (y + z > x));
}

bool IsRightTriangle(double x, double y, double z) {
    return IsTriangle(x, y, x) && ((x*x + y*y == z*z) || (x*x + z*z == y*y) || 
                                  (z*z + y*y == x*x));
}