//  Copyright 2023 hadleya
//  implementations for the functions in arrayfunctions.h
#include<iostream>
using std::cout;
using std:: endl;
#include<iomanip>
using std::setw;  //  set width
#include<cstdlib>
#include"arrayfunctions.h"

//  recursive workhorse for binary search
int BinarySearch(const int values[], int low, int high, int search_value){
  //  run out of stuff to look at
  if (low > high)
    return -1;  //  value is not in the array

  int middle = (low + high) / 2;
  if (values[middle] == search_value)
    return middle;
  if (values[middle] > search_value)
    return BinarySearch(values, low, middle - 1, search_value);
  return BinarySearch(values, middle +1, high, search_value);
}

//  this function is for the user to just send the size, and it calls the
//  recursive workhorse above
int BinarySearch(const int values[], int size, int search_value) {
  return BinarySearch(values, 0, size - 1, search_value);
}

void InsertionSort(int values[], int size) {
  for (int sorted = 0; sorted < size - 1; ++sorted) {
    int i = sorted + 1;
    while (i > 0 && values[i] < values[i - 1]) {
      int temp = values[i];
      values[i] = values[i-1];
      values[i-1] = temp;
      --i;
    }
  }
}

void PopulateArray(int the_array[], int size, int low, int high) {
  if (low > high) {
    int temp = low;
    low = high;
    high = temp;
  }
  for (int i = 0; i < size; ++i)
    the_array[i] = rand() % (high - low + 1) + low;
}

void PrintArray(const int the_array[], int size) {
  int width = (80 - size) / size;
  for (int i = 0; i < size; ++i)
    cout << setw(width) << the_array[i] << " ";
  cout << endl;
}
