//  Copyright 2023 hadleya 
//  example with pointers and new/delete
//  read the major assignment grades for students in each of the classes
//  the student is taking this semester
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int num_classes;
  double * * grades;  //  grades is a pointer to pointers to doubles
  int * num_assignments;
  
  for (int student = 0; student < 5; ++student) {
    cout << "Hello student #" << student << "!" << endl;

    do {
      cout << "How many classes are you taking? ";
      cin >> num_classes;
    } while (num_classes <= 0);
    grades = new double *[num_classes];
    num_assignments = new int [num_classes];

  //  the lines below you'll see from legacy code
  //  recent compilers will auto exit if it's null
  //  if (grades == nullptr || num_assignments == nullptr) 
  //    exit(1);
    for (int i = 0; i < num_classes; ++i) {
      do {
        cout << "How many major assignments are there in class "
            << (i + 1) << "? ";
        cin >> num_assignments[i];
      } while (num_assignments[i] <= 0);
      grades[i] = new double[num_assignments[i]];
      for (int j=0; j < num_assignments[i]; ++j) {
        cout << "Enter grade " << (j + 1) << " ";
        cin >> grades[i][j];  //  a pointer to a pointer is similar to a 2d array
    
      }
    }

    for (int i = 0; i < num_classes; ++i) {
      cout << "Class " << (i + 1) << endl;
      for (int j = 0; j < num_assignments[i]; ++j) {
        cout << "Grade " << (j + 1) << " = " << grades[i][j] << endl;
      }
      cout << endl;
    }  do {
      cout << "How many classes are you taking? ";
      cin >> num_classes;
    } while (num_classes <= 0);
    grades = new double *[num_classes];
    num_assignments = new int [num_classes];

  //  the lines below you'll see from legacy code
  //  recent compilers will auto exit if it's null
  //  if (grades == nullptr || num_assignments == nullptr) 
  //    exit(1);
    for (int i = 0; i < num_classes; ++i) {
      do {
        cout << "How many major assignments are there in class "
            << (i + 1) << "? ";
        cin >> num_assignments[i];
      } while (num_assignments[i] <= 0);
      grades[i] = new double[num_assignments[i]];
      for (int j=0; j < num_assignments[i]; ++j) {
        cout << "Enter grade " << (j + 1) << " ";
        cin >> grades[i][j];  //  a pointer to a pointer is similar to a 2d array
    
      }
    }

    for (int i = 0; i < num_classes; ++i) {
      cout << "Class " << (i + 1) << endl;
      for (int j = 0; j < num_assignments[i]; ++j) {
        cout << "Grade " << (j + 1) << " = " << grades[i][j] << endl;
      }
      cout << endl;
    }

    //  free up space before reallocating for the next student
    for (int i = 0; i < num_classes; ++i)
      delete [] grades[i];
    delete [] grades;
    delete [] num_assignments;
  }
  return 0;
}
