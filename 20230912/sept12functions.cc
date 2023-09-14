// Copyright 2023 hadleya
// implement the functions with prototypes in sept12functions.h

//  expected cpplint error message regarding the fact that we aren't giving the
//  full path to the header file
#include"sept12functions.h"
#include<cmath>

double Square(double x) {
    x *= x;
    return x;
}

bool QuadraticFormula(double a, double b, double c, double& root1, 
                      double& root2) {
    double disc = b * b * 4 * a * c;
    if (disc < 0)
        return false;
    else {
        root1 = (-b + sqrt(disc)) / ( 2 * a );
        root2 = (-b - sqrt(disc)) / ( 2 * a );
    }
    return true;
}
