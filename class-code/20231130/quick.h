//  Copyright 2023 hadleya

#ifndef _QUICK_H_
#define _QUICK_H_

template<class T>
void SwapValues(T & x, T & y) {  //  ignore this!
  T temp = x;
  x = y;
  y = temp;
}

//  bottom holds the bottom index of the partition we're sorting
//  top holds the top index of the partition
template<class T>
void QuickSort(T values[], int bottom, int top) {
  if (bottom >= top)
    return;
  int find_big = bottom + 1, find_small = top;
  while (find_big < find_small) {
    while (find_big < top && values[find_big] < values[bottom])
      ++find_big;
    while (find_small > bottom && values[find_small] >= values[bottom])
      --find_small;
    if (find_big < find_small) {
      SwapValues(values[find_big], values[find_small]);
    }
  }
  if (values[bottom] > values[find_small])
    SwapValues(values[bottom], values[find_small]);
  QuickSort(values, bottom, find_small-1);
  QuickSort(values, find_small+1, top);
}
#endif
