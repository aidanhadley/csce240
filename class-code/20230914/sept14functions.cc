//  Copyright 2023 hadleya
//  implement the functions that have prototypes in sept14functions.h
//  expected cpplint rror message regarding using the full file path in the include
//  function - ignore these
#include"sept14functions.h"

int GCD(int n, int m) {
    if ( m == 0 )   //  special case - unable to divide by 0 - GCD of 0 and
                    //  anything is 1
        return 1;
    if ( n % m == 0)
        return m;
    else
        return GCD(m, n % m);
}
