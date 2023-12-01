//  Copyright 2023 hadleya
//  template quicksort function
#include<iostream>
using std::cout;
using std::endl;
#include"quick.h"

int main() {
  const int kSize = 10;
  int numbers[kSize] = {18, 7, 20, 27, 5, 1, 48, 8, 10, 3};
  QuickSort(numbers, 0, kSize - 1);
  for (int i = 0; i < kSize; ++i)
    cout << numbers[i] << " ";
  cout << endl;
  char words[] = "heyhowareyoudoingtoday";
  QuickSort(words, 0, 21);
  cout << words << endl;
  return 0;
}
