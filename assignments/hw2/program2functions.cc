//  Copyright 2023 hadleya
#include<iostream>
using std::cout;
using std::endl;
#include<cmath>
//  implement the protoypes found in the .h file
//  expected cpplint error below - ignore!
#include"program2functions.h"


int SumDigits(int x) {
    int result = 0;
    //  basically used for absolute value
    if ( x < 0)
        x = x * -1;

    while ( x > 0 ) {
        result += (x % 10);
        x /= 10;
    }

    result += x;
    return result;
}

bool IsPalindrome(int x) {
    if (x < 0) {
        x = x * -1;
    }
    int xCopy = x;
    int digits = 1;
    int result = 0;
    for (int i = x; i/10 > 0; i /= 10) {
        ++digits;
    }
    for (int i = digits; i > 0; --i) {
        result += ((xCopy % 10) * pow(10, (i-1)));
        xCopy /= 10;
    }
    return (x == result);
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

bool SameDigits(int x1, int x2) {
    //  initialize arrays for the frequency of numbers 0-9
    int x1Count[10] = {};
    int x2Count[10] = {};
    //  turn them positive if needed
    if (x1 < 0) {
        x1 = -x1;
    }
    if (x2 < 0) {
        x2 = -x2;
    }

    //  check number frequency in x1
    while (x1 > 0) {
        //  find the number to add
        int toAdd = x1 % 10;
        //  add to the proper index
        x1Count[toAdd]++;
        //  go to next digit
        x1 /= 10;
    }
    //  same for x2
    while (x2 > 0) {
        //  see above for explanation
        int toAdd = x2 % 10;
        x2Count[toAdd]++;
        x2 /= 10;
    }
    //  check and make sure they're identical
    for (int i = 0; i < 10; ++i) {
        if (x1Count[i] != x2Count[i]) {
            //  they're notthe exact same
            return false;
        }
    }
    //  they're the exact same
    return true;
}

void Factor(int x) {
    //  handle 1 seperately - special case
    if (x == 1) {
        cout << "1 is not prime" << endl;
        return;
    }
    //  divisor is to check the primes
    int divisor = 2;
    //  var to check if it's the first time dividing
    bool isFirst = true;
    //  var to check if t's negative
    bool isNegative = false;
    //  print out x
    cout << x;
    //  check if negative
    if (x < 0) {
        x *= -1;
        isNegative = true;
    }
    //  begin loop to break down into primes
    while (x > 1) {     // if x = 1, complete
        if (x % divisor == 0) {     //  divides evenly
            if ((x == divisor) && isFirst) {
                //  it's prime then
                cout << " is prime" << endl;
                return;
            }
            if (isFirst) {
                //  add the equals sign
                isFirst = false;
                cout << " = ";
                if (isNegative) {
                    //  add -
                    cout <<"-";;
                }
            } else {
                //  add the multiplies sign!
                cout << " * ";
            }
            //  output divisor
            cout << divisor;
            // divide x by divisor
            x /= divisor;
        }   else {
            //  it doesn't divide evenly
            divisor++;
            //  This is a smart way, before I was doing set primes, but then I
            //  realized, for example, if x is divisible by 4, it's divisible
            //  by 2. If I've already divided by two, it's not divisible by 4,
            //  6, or anything that's divisible by 2. Big brain
        }
    }
    //  MAKE IT ENDL!!!
    cout << endl;
}
void DoubleMinToIntMinSec(double time, int &min, int &sec) {
    min = static_cast <int> (time);
    time -= min;
    sec = static_cast <int> ((time * 60.0) + 0.5);
    //  that +0.5 is a rounding technique:
    //  if the result is something that is greater than 0.5, it rounds up
    //  if it's less than 0.5, it rounds down. magic!
}
