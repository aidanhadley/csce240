// Copyright 2023 bhipp
// implement functionality of HourlyEmployee class
#include<string>
using std::string;
#include<iostream>
using std::ostream;
using std::cout;
using std::endl;
#include"hourlyemployee.h"
#include"employee.h"

namespace CSCE240_Employees {

double HourlyEmployee::minimum_wage_ = 7.25;

HourlyEmployee::HourlyEmployee(string first, string last, string job_title,
  int pays, double rate, double hrs) : Employee(first, last, job_title, pays),
  hourly_rate_(minimum_wage_), hours_worked_(0) {
  SetHourlyRate(rate);
  SetHoursWorked(hrs);
}

void HourlyEmployee::SetHourlyRate(double hr) {
  if ( hr >= minimum_wage_ )
    hourly_rate_ = hr;
}

void HourlyEmployee::SetHoursWorked(double hw) {
  if ( hw >= 0 )
    hours_worked_ = hw;
}

void HourlyEmployee::SetMinimumWage(double min) {
  if ( min >= minimum_wage_ )
    minimum_wage_ = min;
}

void HourlyEmployee::Print(ostream& whereto) const {
  Employee::Print();
  whereto << "\nHourly Rate: $" << hourly_rate_ << "\nHours Worked: $"
       << hours_worked_;
}

double HourlyEmployee::Pay() const {
  return hourly_rate_ * hours_worked_;
}

}  // namespace CSCE240_Employees
