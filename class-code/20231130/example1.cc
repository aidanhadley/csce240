//  Copyright 2023 hadleya (bhipp cheating)
//  template
#include<iostream>
using std::cout;
using std::endl;

template<class T> //  applies to the next definition/implementation
T Smallest(T x, T y) {
  if (x < y)
    return x;
  return y;
}

//  find the average value in an array
template<class T>
T Average(const T values[], int size) {
  T sum = 0;
  for (int i = 0; i < size; i++) {
    sum += values[i];
  }
  return sum / size;
}

char Average(const char values[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += values[i];
  }
  return sum / size;
}

int main() {
  cout << Smallest(6,15) << "\n" << Smallest(12,2) << "\n"
       << Smallest(6.2, 17.2) << "\n" << Smallest('C', 'A') << endl;
  // cout << Smallest(7.8, 4) << endl;  //  compiler doesn't know which version


  const int kSize = 10;
  int numbers[kSize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << Average(numbers, kSize) << endl;
  float nums[] = {1.3, 9.7, 4.1};
  cout << Average(nums, 3) << endl;
  char what[] = "abcdefghi";
  cout << Average(what, 9) << endl;
  return 0;
}
