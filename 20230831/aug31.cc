//Copyright 2023 hadleya
#include<iostream>
using std::cout; //object to output to print to the standard output device
using std::cin; //object to obain input from the standard input device
using std::endl; //to flush the output buffer and go to the next line

int main() {
    char language;
    do{
    cout << "Select (E)nglish, (S)panish, (F)rench: ";
    cin >> language;
    } while (language != 'E' && language != 'e' 
    && language != 'S' && language != 's' &&
     language != 'F' && language != 'f');
    switch( language ) {
        case 'E':
        case 'e':
            cout << "Hello" << endl;
            break;
        case 'S':
        case 's':
            cout << "Hola" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Salut" << endl;
            break;
        default:
            cout << "Unrecognized choice" << endl;
            // Don't need a braek on the default
    }
}
/*
int main() {
    double grade;
    cout << "Enter a grade: ";
    cin >> grade;
    cout << "grade = " << grade << endl;
    if ( grade >= 59.5 )
        cout << "That's a passing grade." << endl;
    else
        cout << "That's a failing grade." << endl;

    cout << "That's a " << (grade >= 59.5 ? "passing" : "failing") << " grade." << endl;
}
*/
/*
int main() {
    int x, y;
    double z;
    z = x = y = 9.7;
    cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl;

    cout << x / 4 << "\n" << x / 4.0 << "\n" << x % 4 << endl;
    y = 5;
    //explicitly case a variable of one type as another
    //statc_cast<new type>(variable)
    cout << static_cast<double>(x) / y << endl;

    return 0;
}
*/