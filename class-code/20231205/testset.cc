//  Copyright 2023 hadleya
//  test the functionality of myset.h
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
#include"myset.h"
using CSCE240_Sets::MySet;

int main() {
  MySet<int> int_set;
  cout << "int set = " << int_set << endl;
  int next_int;
  cout << "Enter a value to add to the set (or -999 to quit) ";
  cin >> next_int;
  while (next_int != -999) {
    int_set.AddElement(next_int);
    cout << "int set = " << int_set << endl;
    cout << "Enter a value to add to the set (or -999 to quit) ";
    cin >> next_int;
  }

  MySet<string> string_set;
  cout << "string set = " << string_set << endl;
  string next_string;
  cout << "Enter a value to add to the set (or quit to quit) ";
  cin >> next_string;
  while (next_string != "quit") {
    string_set.AddElement(next_string);
    cout << "string set = " << string_set << endl;
    cout << "Enter a value to add to the set (or quit to quit) ";
    cin >> next_string;
  }


  MySet<string> string_copy(string_set);
  string_copy.AddElement("boush");
  cout << "original: " << string_set << endl;
  cout << "modified: " << string_copy << endl;
  string_set = string_copy;
  cout << "assigned: " << string_set << endl;
  return 0;
}