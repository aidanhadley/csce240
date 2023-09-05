// Copyright 2023 hadleya
// (loops and functions :3)
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<cstdlib>   // int rand();
#include<ctime>

// function to return a random alphabetic character
char RandomChar();



int main() {
    srand(time(0));
    cout << RandomChar() << endl;
}

char RandomChar () {
    return 'a' + rand() % 26;
}
/*
int main() {
    srand(time(0));
    for ( int i = 0; i < 10; ++i )
    // cpplint will complain - we're not writing multi-threaded code so rand
    // is ok for our purposes
        cout << rand() % 6 + 1 << endl;
    return 0;
}
*/
/*
#include<cmath> // library with a binch of mathematical functions
//double pow( double, double ); - prototype
//pow( double, double ) - signature
//double - return type
//pow - name
//double, double - parameters

int main() {
    //pow(2, 7) function call
    //2, 7 - arguments
    cout << pow( 2, 7 ) << endl;

    // double ceil(double)
    // double floor(double)
    cout << ceil(7.7) << "\n" << floor(7.7) << endl;

    double grade;
    cout << "Enter a grade ";
    cin >> grade;
    cout << floor(grade + 0.5) << endl;
}
*/
/*
int main(int argc, char * argv []) {
    cout << argc << endl;
    cout << argv[1] << endl;
    return 0;
}
*/
/*
int main() {
    for ( char letter = 'a'; letter <= 'z'; ++letter )
        cout << letter << " " << ('z' - letter) << endl;

    return 0; 
}
*/
/*
int main() {
    for ( int i = 0, j = 8; i < 10; ++i, --j)
        cout << i << " " << j <<endl;
    // cout << "After the for loop i = " << i << " and j = " << j << endl;
    // DOESNT WORK!

    int n = 0, m = 8;
    while (n < 10) {
        cout << n << " " << m << endl;
        ++n;
        --m;
    }

    cout << "After the loop n = " << n << " and m = " << m << endl;
    return 0;
}
*/
