#include <iostream>
using std::cout;
using std::endl;
bool SameDigits(int x1, int x2) {
    //  initializ arrays for the frequency of numbers 0-9
    int x1Count[10] = {};
    int x2Count[10] = {};

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
    for(int i = 0; i < 10; ++i) {
        if (x1Count[i] != x2Count[i]) {
            //  they're notthe exact same
            return false;
        }
    }
    //  they're the exact same
    return true;
}

int main() {
    // Test cases
    std::cout << SameDigits(12981, 21189) << std::endl; // true
    std::cout << SameDigits(1131, 311) << std::endl;   // false

    return 0;
}
