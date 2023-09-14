//  Copyright 2023 hadleya
//  est functions discussed or written on 9/12/23
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<iomanip>
using std::setw;
using std::setfill;
#include"sept12functions.h"

int main() {
    double num = 5.2;
    cout << Square(num) << endl;
    cout << "After the function call, num = " << num << endl;

    double a, b, c, x1, x2;
    cout << "Enter the three coefficients of a quadratic polynomial: ";
    cin >> a >> b >> c;
    if ( QuadraticFormula(a, b, c, x1, x2) )
        cout << "The roots of " << a << "*x^2 + " << b << "*x + " << c << " are "
             << x1 << " " << x2 << endl;

    // cout << setfill('u');   //  needs to be called in an output statement
    // cout << setw(10) << "hi" << endl;
    // cout << setw(4) << 2 << endl;
    return 0;
}