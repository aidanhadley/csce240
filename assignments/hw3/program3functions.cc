//  Copyright 2023 hadleya
//  Implementation of the functions in the .h file

#include"program3functions.h"
//  DEBUG
#include<iostream>
#include"checkArraysMatch.h"

int CountAboveAv(const double x[][kCols], int rows) {
  double total = 0;
  int count = 0;

  //  find the total
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < kCols; ++j) {
      total += x[i][j];
    }
  }
  //  find the average (mean)
  double mean = total / (rows * kCols);
  //  counts numbers above mean
  for (int i=0; i < rows; ++i) {
    for (int j=0; j < kCols; ++j) {
      if (x[i][j] > mean) {
        ++count;
      }
    }
  }
  return count;
}

//  NOT PASSING; GET BACK TO THIS
void SortByCol(double x[][kCols], int rows, int column, bool sortAscending) {
  //  bubble sort?
  bool isSorted = false;
  do {
    for (int i = 1; i < rows; ++i) {
      if(x[i][column] < x[i-1][column]) {
        //swap rows function here
        for (int j = 0; j < kCols; ++j) {
          double temp = x[i][j];
          x[i][j] = x[i - 1][j];
          x[i - 1][j] = temp;
        }
      }
    }
    //  do a check to see if it's sorted
    isSorted = true;
    for (int i = 1; i < rows; ++i) {
      if (x[i][column] < x[i - 1][column]) {
        isSorted = false;
      }
    }
  } while(!isSorted);
}
//  TODO: SORTBYROWS
//  NOT PASSING; GET BACK TO THIS
void SortByRow(double x[][kCols], int rows, int row, bool sortAscending) {
  //  burowsbble sort?
  bool isSorted = false;
  do {
    for (int i = 1; i < kCols; ++i) {
      if(x[row][i] > x[row][i - 1]) {
        //swap rows function here
        for (int j = 0; j < rows; ++j) {
          double temp = x[j][i];
          x[j][i] = x[j][i - 1];
          x[j][i - 1] = temp;
        }
      }
    }
    //  do a check to see if it's sorted
    isSorted = true;
    for (int i = 1; i < kCols; ++i) {
      if (x[row][i] > x[row][i - 1]) {
        isSorted = false;
      }
    }
  } while(!isSorted);
}
double MedianInCol(const double x[][kCols], int rows, int column) {
  //  get the column in a single array
  double nums[rows] = {};
  for (int i = 0; i < rows; ++i) {
    nums[i] = x[i][column];
  }
  //  nums now has the column
  //  bubble sort my beloved
  bool isSorted;
  do {
    // flip numbers
    for (int i = 1; i < rows; ++i) {
      if (nums[i] < nums[i - 1]) {
        double temp = nums[i];
        nums[i] = nums[i -1];
        nums[i - 1] = temp;
      }
    }
    //check if it's sorted (innocent until proven guilty)
    isSorted = true;
    for (int i = 1; i < rows; ++i) {
      if (nums[i] < nums[i - 1]) {
        isSorted = false;
      }
    }
  } while (!isSorted);
  //  now find the middle one
  //  it's different if it's an even amt!
  //  odd case:
  if (rows % 2 == 1) {
    return nums[rows / 2];
  } else {  //  even case
    double output = 0;
    output = (nums[rows / 2] + nums[(rows / 2) - 1]) / 2;
    return output;
  }
}

int ModeInCol(const double x[][kCols], int rows, int column, double y[2]) {
  //  get the column in a single array
  double nums[rows] = {};
  for (int i = 0; i < rows; ++i) {
    nums[i] = x[i][column];
  }
  //  nums now has the column
  //  bubble sort again babey
  bool isSorted;
  do {
    // flip numbers
    for (int i = 1; i < rows; ++i) {
      if (nums[i] < nums[i - 1]) {
        double temp = nums[i];
        nums[i] = nums[i -1];
        nums[i - 1] = temp;
      }
    }
    //check if it's sorted (innocent until proven guilty)
    isSorted = true;
    for (int i = 1; i < rows; ++i) {
      if (nums[i] < nums[i - 1]) {
        isSorted = false;
      }
    }
  } while (!isSorted);

  //  now it's sorted, we can simply start counting
  int currentScore = 1;
  int highScore = 0;
  double output[2] = {};
  for (int i = 1; i < rows; ++ i) {
    if (nums[i] == nums[i - 1]) {
      ++currentScore;
      if (currentScore > highScore) {
        output[0] = nums[i];
        output[1] = 0; 
        highScore = currentScore;
      }else if (currentScore == highScore) {
        if (output[1] != 0) {
          return 0;
        } else if (output[0] != 0){
          output[1] = nums[i];
        } else {
          output[0] = nums[i];
        }
      } 
    } else {
      currentScore = 1;
    }
  }

  if (output[1] != 0) {
    y[0] = output[0];
    y[1] = output[1];
    return 2;
  } else if (output[0] != 0) {
    y[0] = output[0];
    return 1;
  } else {
    return 0;
  }
}