// Copyright 2023 bhipp
// Define a SalariedEmployee of the Employee base class
#include<string>
using std::string;
#include<istream>
using std::ostream;
using std::cout;
#include"employee.h"

#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_

namespace CSCE240_Employees {

class SalariedEmployee : public Employee {
 public:
  explicit SalariedEmployee(string first = "Jane", string last = "Doe",
                     string job_title = "TBD", int pays = 52, double sal = 0);
  explicit SalariedEmployee(const Employee& e, double sal = 0);
  ~SalariedEmployee();
  void SetSalary(double s);
  double GetSalary() const { return salary_; }

  // the Print function (same signature as Print function from the
  // Employee base class - this is now a virtual function because it's
  // virtual in the base class. The function is overridden (not redefined)
  // override tells readers of our code that this function is virtual
  // in the base class and we're overriding it here - also will cause an
  // error if the function is not virtual in the base class
  void Print(ostream& whereto = cout) const override;

  double Pay() const override;

 private:
  double salary_;
};

}  // namespace CSCE240_Employees

#endif  // end _SALARIED_EMPLOYEE_H_
