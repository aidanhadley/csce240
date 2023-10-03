// Copyright 2023 bhipp (i stole this :3)
// introduction to arrays in C++
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

// a function to print the values in an array of doubles
// this function should not modify the values in the array, so we've made the
// array parameter constant
void PrintDoubles(const double[], int);

// function that squares the values in an array of double
void SquareDoubles(double[], int);

// linear search - returns the position of the search value in the array or
//                 -1 if the search value is not in the array
int LinearSearch(const double the_array[], int size, double search_value);

int main() {
  const int kArraySize = 10;
  // one opportunity to initialize the array values to a list of values
  // with the declaration - number of values in the list needs to be <= size
  // un-listed values will be initialized to 0
  double some_reals[kArraySize] = { 7.3, 1.2, -85 };

  // sizeof can be used to show how much memory a variable takes
  cout << "sizeof(int) " << sizeof(int) << "\nsizeof(double) "
       << sizeof(double) << endl;

  // name of the array is the address of the first element in the array
  cout << some_reals << endl;

  for ( int i = 0; i < kArraySize; ++i )
    cout << some_reals[i] << " ";
  cout << endl;

  // to send an array to a function, just use the name of the array (no [])
  PrintDoubles(some_reals, kArraySize);
  SquareDoubles(some_reals, kArraySize);
  PrintDoubles(some_reals, kArraySize);

  double lookin4;
  cout << "Whacha lookin for? ";
  cin >> lookin4;
  int position = LinearSearch(some_reals, kArraySize, lookin4);
  cout << lookin4 << (position == -1 ? " isn't there" : " is in there" )
       << endl;

  // we can leave out the size IF we initialize to a list - array will be an
  // exact fit
  int some_ints[] = { 1, 2, 3, 4, 5 };

  // can't send an array of a different type to a function that expects an
  // array of doubles
  // PrintDoubles(some_ints, 5);
}

void PrintDoubles(const double numbers[], int size) {
  for ( int i = 0; i < size; ++i )
    cout << numbers[i] << " ";
  cout << endl;
}

void SquareDoubles(double numbers[], int size) {
  for ( int i = 0; i < size; ++i )
    numbers[i] *= numbers[i];
}

int LinearSearch(const double the_array[], int size, double search_value) {
  int found = -1;
  for ( int i = 0; i < size && found == -1; ++i ) {
    if ( the_array[i] == search_value )
       found = i;
  }
  return found;
}





