// Copyright 2023 bhipp
// Define a HourlyEmployee of the Employee base class
#include<string>
using std::string;
#include"employee.h"

#ifndef _HOURLY_EMPLOYEE_H_
#define _HOURLY_EMPLOYEE_H_

namespace CSCE240_Employees {

class HourlyEmployee : public Employee {
 public:
  explicit HourlyEmployee(string first = "Jane", string last = "Doe",
                     string job_title = "TBD", int pays = 52,
                     double rate = minimum_wage_, double hours = 0);

  // the Print function (same signature as Print function from the
  // Employee base class - this is now a virtual function because it's
  // virtual in the base class. The function is overridden (not redefined)
  // in the base class and we're overriding it here - also will cause an
  // error if the function is not virtual in the base class
  void Print() const override;

  double GetHourlyRate() const { return hourly_rate_; }
  double GetHoursWorked() const { return hours_worked_; }
  static double GetMinimumWage() { return minimum_wage_; }

  void SetHourlyRate(double hr);
  void SetHoursWorked(double hw);
  static void SetMinimumWage(double mw);

  double Pay() const override;

 private:
  double hourly_rate_;
  double hours_worked_;

  static double minimum_wage_;
};

}  // namespace CSCE240_Employees

#endif  // end _HOURLY_EMPLOYEE_H_
