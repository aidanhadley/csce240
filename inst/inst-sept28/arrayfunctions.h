// Copyright 2023 bhipp
// includes the prototypes for array functions implemented in class on 9/28/23
#ifndef _ARRAYFUNCTIONS_H_
#define _ARRAYFUNCTIONS_H_

// binary search an array of ints
// pre-condition: the array sent to the function is sorted in ascending order
int BinarySearch(const int values[], int size, int search_value);

// insertion sort function to sort an array of integers (O(n^2) average case,
// O(n) best case!
void InsertionSort(int[], int);

// function to output the values in an integer array to the standard output
// device
void PrintArray(const int[], int);

// function to populate an integer array with a bunch of randomly generated
// values between low and high. If low > high the function will switchem
void PopulateArray(int the_array[], int size, int low = 0, int high = 99);


#endif
