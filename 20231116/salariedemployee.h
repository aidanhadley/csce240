//  Copyright 2023 hadleya
//  Define a SalariedEmployee of the Employee base class
#include"employee.h"

#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_

namespace CSCE240_Employees {

class SalariedEmployee : public Employee {
 public:
  explicit SalariedEmployee(string first = "Jane", string last = "Doe",
                     string job_title = "TBD", int pays = 52, double sal = 0);
  explicit SalariedEmployee(const Employee& e, double sal = 0);
  void SetSalary(double s);
  double GetSalary() const { return salary_; }
  
  //  redefine the Print function (same signature as Print function fro the
  //  Employee base class)
  void Print() const;

 private:
  double salary_;
};

} //  namespace CSCE240_Employees

#endif  //  end _SALARIED_EMPLOYEE_H_
