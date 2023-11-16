//  Copyright 2023 hadleya
//  main class for SalariedEmployee
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"salariedemployee.h"
#include"employee.h"

namespace CSCE240_Employees {
  
SalariedEmployee::SalariedEmployee(string f, string l, string jt, int ppy, 
                  double sal) : Employee(f, l, jt, ppy), salary_(0) {

  SetSalary(sal);
}

SalariedEmployee::SalariedEmployee(const Employee& e, double sal) 
                  : Employee(e), salary_(0) {
  SetSalary(sal);
}

void SalariedEmployee::SetSalary(double s) {
  if (s >= 0)
    salary_ = s;
}

void SalariedEmployee::Print() const {
  //  call the base class version to get all the base class info
  Employee::Print();
  cout << "Annual Salary: " << salary_ << endl;
}

} //  namespace CSCE240_Employees
