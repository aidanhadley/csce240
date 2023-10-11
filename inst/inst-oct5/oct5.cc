// Copyright 2023 bhipp
// Introduction to pointers in C++
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
  // we want to read a bunch of positive integers from the user and hold on to
  // those to compute stuff
  int capacity = 10, next_int, i = 0;
  int * the_numbers = new int[capacity];
  cout << "Enter your positive integers. Enter 0 to quit.\n";
  cin >> next_int;
  while ( next_int != 0 ) {
    // check if we've run out of space, and if so, reallocate
    if ( i == capacity ) {
// START TALKING ABOUT THIS CODE ON TUESDAY!!!!!!
      int * temp = new int[capacity * 2];
      for ( int j = 0; j < capacity; ++j )
        temp[j] = the_numbers[j];
      delete [] the_numbers;  // free up the old memory!!!!
      the_numbers = temp;
      capacity *= 2;
    }
    the_numbers[i] = next_int;  // *(the_numbers + i) = next_int;
    ++i;
    cin >> next_int;
  }
  return 0;
}








// write a function that takes a pointer to a character, a c-string, and
// capitalizes all of the letters in that c-string
void Capitalize(char * char_pointer) {
  while ( *char_pointer != '\0' ) {
    if ( *char_pointer >= 'a' && *char_pointer <= 'z' )
      *char_pointer = 'A' + (*char_pointer - 'a');  // change the character
                                                    // that we're pointing to
    ++char_pointer;  // move to the next address
  }
}

// a function that returns the number of spaces in a c-string
int CountSpaces(const char * cptr) {
  int space_count = 0;
  while ( *cptr != '\0' ) {
    if ( *cptr == ' ' )
      ++space_count;
    ++cptr;
  }
  return space_count;
}

// write a function that takes a pointer to a double and square it
void Square(double * x) {
  *x *= *x;
  return;
}

/*
int main() {
  char words[] = "How are you doing?";
  Capitalize(words);
  cout << words << "\n" << CountSpaces(words) << endl;
}
*/

/*  int array_of_ints[10] = { 1, 2, 3, 10 };
  int * iptr = array_of_ints;

  double array_of_doubles[10] = {3.7};
  double * dptr = array_of_doubles;


  cout << array_of_ints << endl;
  cout << iptr << endl;
  cout << ++iptr << endl;
  cout << dptr << endl;
  cout << ++dptr << endl;
  
	iptr = array_of_ints;
	for ( int i = 0; i < 10; ++i, ++iptr ) {
    // cout << *(array_of_ints + i) << " ";  // array_of_ints[i] << " ";
    // cout << iptr[i] << " ";
    cout << *iptr << " ";
  }
  cout << endl;

  return 0;
}
*/
/*  double * pointer_to_double;
  double some_number = 9.3;
  Square(&some_number);
  pointer_to_double = &some_number;
  cout << "some_number = " << some_number 
       << "\n&some_number = " << &some_number 
       << "\npointer_to_double = " << pointer_to_double
       << "\n&pointer_to_number = " << &pointer_to_double
       << "\n*pointer_to_number = " << *pointer_to_double 
       << "\n*(&some_number) = " << *(&some_number) << endl;
  return 0;
}
*/
