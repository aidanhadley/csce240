// Copyright 2023 bhipp
// Sample tests for the testSumDigits function
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<fstream>
using std::ifstream;
#include<cstring>

int main() {
  system("./testFactorCall > student-factor-output.txt");
  ifstream student_file("student-factor-output.txt");
  ifstream correct_file("correct-factor-output.txt");
  int line = 1;
  char student_line[101] = "";
  char correct_line[101] = "";
  student_file.getline(student_line, 100); 
  correct_file.getline(correct_line, 100);
  while ( correct_file.good() ) {
    if ( student_file.good() ) {
      if ( strcmp(correct_line, student_line) == 0 )
        cout << "Passed test " << line << endl;
      else
        cout << "Failed test " << line << "\n\tCorrect output: \"" 
             << correct_line << "\"\n\tStudent output: \"" << student_line 
             << "\"" << endl;
      student_file.getline(student_line, 100); 
    }
    else {
      cout << "Failed test " << line << "\n\tCorrect output: \"" 
           << correct_line << "\"\n\tStudent output: \"\"" << endl;
    }
    ++line;
    correct_file.getline(correct_line, 100);
  }
  return 0;
}

