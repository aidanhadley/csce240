//  Copyright 2023 hadleya
#include<iostream>
using std::cout;
using std::endl;
//  implement the protoypes found in the .h file
//  expected cpplint error below - ignore!
#include"program2functions.h"


int SumDigits(int x) {
    int result = 0;
    //  basically used for absolute value
    if( x < 0)
        x = x * -1;

    for (; x/10 > 0; x /= 10)
        result += ( x % 10);
    result += x;
    return result;
}

bool IsPalindrome(int x) {
    //  TODO: make logic for this one lol
}

int CountDigitMatch(int x, int check) {
    int result = 0;
    //  absolute value
    if ( x < 0)
        x = x * -1;

    //  check and make sure check variable isn't more than 9 or negative
    if (( check > 9) || (check < 0))
        return -1;
    for (; x/10 > 0; x /= 10) {
        if ( (x % 10) == check )
            result++;
    }
    if ( (x % 10) == check )
        result++;
    return result;

}