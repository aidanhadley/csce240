//  Copyright 2023 hadleya

#ifndef _PROGRAM2FUNCTIONS_H_
#define _PROGRAM2FUNCTIONS_H_

//  Might not be in the right spot:

#include<string>
// SumDigits takes an integer argument and returns the sum of the digits in
// the absolute value of the argument.
// For example, SumDigits(123) will return 6, and SumDigits(-111) will return 3
int SumDigits(int);

// IsPalindrome function takes an integer argument and returns true if the
// absolute value of the integer is a palindrome (the digits read the same
// forwards and backwards) and returns false if the absolute value of the
// integer is not a palindrome.
// For example, IsPalindrome(98789) will return true and
//              IsPalindrome(112) will return false
bool IsPalindrome(int);

// CountDigitMatch takes two arguments, the first is an integer, and the second
// is non-negative one-digit integer.
// The function will return the number of occurrences of the second argument in
// the absolute value of the first argument.
// For example, CountDigitMatch(57585, 5) will return 3 since the digit 5
// appears three times in 57585.
// If the second argument is not a non-negative one-digit integer, the
// function will return -1.
// For example, CountDigitMatch(57585, 57) will return -1
int CountDigitMatch(int);

// SameDigits takes two integer arguments. The function will return true if
// the arguments are made up of exactly the same digits, and false otherwise.
// For example, SameDigits(12981, 21189) will return true, and
// SameDigits(1131, 311) will return false.
bool SameDigits(int, int);

// Factor takes one integer argument and outputs the prime factorization of
// the argument to the standard output device (using cout) in the following
// format:
//    "argument = p1 * p2 * ... * pn"
//    where pi <= pj for all i < j
// For example, Factor(45) will output "45 = 3 * 3 * 5" to the standard
// output device.
// If the argument is negative, the first prime factor will display as
// negative. For example, Factor(-484) will output "-484 = -2 * 2 * 11 * 11"
// If the argument is prime, the function outputs that the argument is prime.
// For example, Factor(13) will output "13 is prime"
void Factor(int);

// DoubleMinToIntMinSec will take three arguments, a double for the value of a
// minute quantity expressed as a real number, and two integer variables.
// The function will compute the equivalent of the double minute value to
// minutes and seconds, rounding to the nearest second, and assign those values
// to the second and third arguments, respectively.
// For example, after the function call DoubleMinToIntMinSec(3.75, min, sec);
// the value of min will be 3, and the value of sec will be 45
// (because 3.75 minutes is 3 minutes and 45 seconds)
void DoubleMinToIntMinSec(double, int, int);

#endif
