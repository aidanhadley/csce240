//  Copyright 2023 hadleya
#include<iostream>
using std::cout;
using std::endl;
//  implement the protoypes found in the .h file
//  expected cpplint error below - ignore!
#include"program2functions.h"


int SumDigits(int x) {
    int output = 0;
    //  basically used for absolute value
    if( x < 0)
        x = x * -1;

    for (; x/10 > 0; x /= 10)
        output += ( x % 10);
    output += x;
    return output;
}