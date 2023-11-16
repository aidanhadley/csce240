// Copyright 2023 bhipp
// test/call the functions written arrayfunctions
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include"arrayfunctions.h"

int main() {
  const int kSize = 12;
  int int_array[kSize] = {};
  PrintArray(int_array, kSize);
  PopulateArray(int_array, kSize, 10, 50);
  PrintArray(int_array, kSize);
  InsertionSort(int_array, kSize);
  PrintArray(int_array, kSize);
  int x;
  do {
    cout << "What are you looking for? (enter -1 to exit) ";
    cin >> x;
    cout << BinarySearch(int_array, kSize, x) << endl;
  } while ( x != -1 );

  const int kRows = 5;
  const int kCols = 7;
  int big_array[kRows][kCols] = { {1}, {2, 3}, {4, 6, 9} };
  return 0;
}
