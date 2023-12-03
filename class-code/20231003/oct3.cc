//  Copyright 2023 hadleya
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include"oct3functions.h"

int main() {
  double * double_pointer;

  const int kSize = 6;
  char my_chars[kSize] = "abcde"; //  = { 'a', 'b', 'c', 'd', 'e', '\0' };

  for (int i = 0; i < kSize; ++i)
    cout << my_chars[i] << " ";
  cout << endl;
  my_chars[5] = '!';
  cout << my_chars << endl;
  int j = 0;
  while (my_chars[j] != '\0')
    cout << my_chars[j++];
  cout << endl;
  
  cout << "Enter a word ";
//  cin >> my_chars;  //  DONT DO THIS!!!!!
  cin.getline(my_chars, 6); //  number is max
  cout << "Here's what I got: " << my_chars << endl;

  return 0;
}
/*
int main() {
  const int kRows = 4;
  const double big_array[kRows][kCols] = 
    {{1.2, 4.7}, {-0.5}, {7, 16.9, 8.1, 9.2}};

//  cout << sizeof(big_array) / sizeof(double) << endl;

  cout << big_array << endl;
  cout << big_array[0] << endl;
  cout << big_array[1] << endl;
  cout << big_array[2] << endl;
  cout << big_array[2][3] << endl;

  PrintArray(big_array, kRows);

  return 0;
}
*/
/*  1.2 -0.5  7
*   4.7       16.9
*             8.1
*             9.2
*/
