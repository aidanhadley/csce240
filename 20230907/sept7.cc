//  Copyright 2023 hadleya
//  more w functions :)
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<iomanip>   //  includes functionality for formatting i/o
#include"trianglestuff.h"

int main () {
    double s1, s2, s3;
    cout << "Enter three real numbers ";
    cin >> s1 >> s2 >> s3;
    cout << "The three values " << (IsTriangle(s1, s2, s3) ? "can" : "cannot")
         << " be the sides lengths of a triangle" << endl;
    cout << "The three values " 
         << (IsRightTriangle(s1, s2, s3) ? "can" : "cannot")
         << " be the sides lengths of a right triangle" << endl;
}
//  s1, s2, s3 have block scope
// x, y, z are only visible in the function

/*
int main() {
    cout << std::setprecision(2);
    double x;
    cout << "Enter a real number ";
    cin >> x;
    cout << "x = " << x << endl;
    cout << std::setiosflags(std::ios::fixed | std::ios::showpoint);
    cout << "x = " << x << endl;

    double milk_price, egg_price;
    cout << "How much is a gallon of milk? $";
    cin >> milk_price;
    cout << "How much is a dozen eggs? $";
    cin >> egg_price;

    cout << std::setw(15) << "Milk: $" << std::setw(6) << milk_price << endl;
    cout << std::setw(15) << "Dozen Eggs: $" << std::setw(6) << egg_price << endl;

    return 0;
}
*/