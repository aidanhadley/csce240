//  Copyright 2023 hadleya
//  example template class - Set
#ifndef _MY_SET_H_
#define _MY_SET_H_

#include<iostream>
using std::ostream;

namespace CSCE240_Sets {

template<class T>
class MySet {
  template<class T2>
  friend ostream& operator << (ostream& where, const MySet<T2>&);

 public:
  MySet() {
    cardinality_ = 0;
    values_ = nullptr;
  }
  ~MySet() { delete [] values_; }

  MySet(const MySet& to_copy);
  MySet& operator =(const MySet& to_copy);

  bool IsElementOf(T val) {
    for (int i = 0; i < cardinality_; ++i)
      if (values_[i] == val)
        return true;
    return false;
  }

  void AddElement(T val) {
    if (IsElementOf(val))
      return;
    T * temp = new T[++cardinality_];
    for (int i = 0;  i < cardinality_ - 1; ++i)
      temp[i] = values_[i];
    temp[cardinality_ - 1] = val;
    delete [] values_;
    values_ = temp;
  }

 private:
  int cardinality_;
  T * values_;
};

template<class T>
MySet<T>::MySet(const MySet<T>& to_copy) : values_(nullptr) {
  cardinality_ = to_copy.cardinality_;
  if (cardinality_ > 0) {
    values_ = new T[cardinality_];
    for (int i = 0; i < cardinality_; ++i)
      values_[i] = to_copy.values_[i];
  }
}

template<class T>
MySet<T>& MySet<T>::operator = (const MySet<T>& to_copy) {
  if (cardinality_ != to_copy.cardinality_) {
    if (values_ != nullptr)
      delete [] values_;
    cardinality_ = to_copy.cardinality_;
    if (cardinality_ == 0)
      values_ = nullptr;
    else
      values_ = new T[cardinality_];
  }
  for (int i = 0; i < cardinality_; ++i)
    values_[i] = to_copy.values_[i];
  return *this;
}

template<class T2>
ostream& operator << (ostream& where, const MySet<T2>& s) {
  where << "{";
  for (int i = 0; i < s.cardinality_; ++i)
    where << s.values_[i] << (i < s.cardinality_ - 1 ? ", " : "");
  where << "}";
  return where;
}
}  //  end namespace CSCE240_Sets

#endif


