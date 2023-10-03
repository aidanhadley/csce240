//  Copyright 2023 hadleya
//  text/call the functions written arrayfunctions
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"arrayfunctions.h"

int main() {
  const int kSize = 5;
  int int_array[kSize] = {};
  PrintArray(int_array, kSize);
  PopulateArray(int_array, kSize, 10, 50);
  PrintArray(int_array, kSize);
  InsertionSort(int_array, kSize);
  PrintArray(int_array, kSize);
  int x;
  do {
    cout << "whatcha lookin for? (-1 to exit)";
    cin >> x;
    cout << BinarySearch(int_array, kSize, x) << endl;
  } while (x != -1);

  const int kRows = 5;
  const int kCols = 7;
  int big_array[kRows][kCols] = {{1}, {2, 3}, {4, 6, 9}};
  return 0;
}
