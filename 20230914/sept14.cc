//  Copyright 2023 hadleya
//  test functions implement in sept14functions.cc
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//  expected cpplint error message regarding using the full file path in the include
//  function - ignore these
#include"sept14functions.h"

int main() {
    if ( GCD(49, 63) == 7 )
        cout << "Passed test GCD(49, 63) ==7" << endl;
    else
        cout << "Failed test GCD(49, 63) ==7" << endl;

    if ( GCD(0, 2) == 1 )
        cout << "Passed test GCD(0, 2) == 1" << endl;
    else
        cout << "Failed test GCD(0, 2) == 1" << endl;

    if ( GCD(100, 51) == 1 )
        cout << "Passed test GCD(100, 51) == 1" << endl;
    else
        cout << "Failed test GCD(100, 51) == 1" << endl;

    return 0;
}
