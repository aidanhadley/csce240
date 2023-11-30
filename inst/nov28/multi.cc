#include<iostream>
using std::cout;
using std::endl;

class GrandBase {
 public:
  GrandBase() {
    cout << "GrandBase" << endl;
  }
  virtual void Print() const = 0;
  double z;
};

class BaseA : public GrandBase {
 public:
  BaseA() {
    x_ = 5;
    cout << "in BaseA()" << endl;
  }
  virtual void Print() const {
    cout << "BaseA x = " << x_ << endl;
  }
  int x_;
};

class BaseB : public GrandBase {
 public:
  BaseB() {
    x_ = 2;
    cout << "in BaseB()" << endl;
  }
  virtual void Print() const {
    cout << "BaseB x = " << x_ << endl;
  }
  int x_;
};

class Child : public BaseA, public BaseB {
 public:
  void Print() const {
    BaseA::Print();
    BaseB::Print();
  }
};

int main() {
  Child c;
  c.Print();
//  GrandBase * ptr = &c;
//  ptr->Print();
  return 0;
}

