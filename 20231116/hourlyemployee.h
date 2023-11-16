//  Copyright 2023 hadleya
//  Define a HourlyEmployee of the Employee base class
#include"employee.h"

#ifndef _HOURLY_EMPLOYEE_H_
#define _HOURLY_EMPLOYEE_H_

namespace CSCE240_Employees {

class HourlyEmployee : public Employee {
 public:
  explicit HourlyEmployee(string first = "Jane", string last = "Doe",
                     string job_title = "TBD", int pays = 52, 
                     double rate = minimum_wage_, double hours = 0);
  // explicit HourlyEmployee(const Employee& e);
  
  
  //  redefine the Print function (same signature as Print function fro the
  //  Employee base class)
  // void Print() const;

  double GetHourlyRate() const { return hourly_rate_; }
  double GetHoursWorked() const { return hours_worked_; }
  static double GetMinimumWage() { return minimum_wage_; }

  void SetHourlyRate(double hr);
  void SetHoursWorked(double hw);
  static void SetMinimumWage(double min);

 private:
  double hourly_rate_;
  double hours_worked_;

  static double minimum_wage_;
};

} //  namespace CSCE240_Employees

#endif  //  end _Hourly_EMPLOYEE_H_
