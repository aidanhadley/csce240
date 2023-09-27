//  Copyright 2023 hadleya
//  intro to arrays in cpp
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//  a function to print the values in an array of doubles
//  this function should not modify the values in the array,
int main() {
  //  NOTE: GSG for constants is kThenCamelCase
    const int kArraySize = 10;

  //  one opportunity to initalize the array values to a list of value
  //  with the declaration = number of values in the list needs to be <= size
  //  un-listed variables wil be initialized to 0
  double some_reals[kArraySize] = { 7.23, 1.2, -85};

  //  sizeof can be used to show how much memory a variable takes
  cout << "sizeof(int) " << sizeof(int) << "\nsizeof(double) "
       << sizeof(double) << endl;

  //  name of the array is the address of the first element in the array
  cout << some_reals << endl;

  for (int i = 0; i < kArraySize; ++i)
    cout << some_reals[i] << " ";
  cout << endl;

  //  to send an array to a function, just use the name of the array (no [])
  PrintDoubles(some_reals, kArraySize);
  PrintDoubles(some_reals, kArraySize);
  //  we can leave out the size IF we initialize to a list - array will be an
  //  exact fit
  int some_ints[] = { 1, 2, 3, 4, 5};
}



void PrintDoubles(const double numbers[], int size) {
  for (int i = 0; i < size ; ++i)
    cout << numbers[i] << " ";
  cout << endl;
}
10