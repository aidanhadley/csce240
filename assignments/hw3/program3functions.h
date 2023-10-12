//  Copyright 2023 hadleya
//  This program contains prototypes of different functions
#ifndef _PROGRAM3FUNCTIONS_H_
#define _PROGRAM3FUNCTIONS_H_

const int kCols = 10;

int CountAboveAv(const double x[][kCols], int rows);

void SortByCol(double x[][kCols], int rows, int sortBy, bool sortAscending);
//  TODO: SORTBYROWS
void SortByRow(double x[][kCols], int rows, int sortBy, bool sortAscending);

double MedianInCol(const double x[][kCols], int rows, int column);

int ModeInCol(const double x[][kCols], int rows, int column, double modes[2]);

#endif
