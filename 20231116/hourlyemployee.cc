//  Copyright 2023 hadleya
//  implement functionality for HourlyEmployee
#include<string>
using std::string;
#include"hourlyemployee.h"
#include"employee.h"

namespace CSCE240_Employees {

double HourlyEmployee::minimum_wage_ = 7.25;

HourlyEmployee::HourlyEmployee(string first, string last, string job_title,
  int pays, double rate, double hrs) : Employee(first,last, job_title, pays),
  hourly_rate_(minimum_wage_), hours_worked_(0) { 
    SetHourlyRate(rate);
    SetHoursWorked(hrs);
}

void HourlyEmployee::SetHourlyRate(double hr) {
  if (hr >= minimum_wage_)
    hourly_rate_ = hr;
}

void HourlyEmployee::SetHoursWorked(double hw) {
  if (hw >= 0)
    hours_worked_ = hw;
}

void HourlyEmployee::SetMinimumWage(double min) {
  if (min >= minimum_wage_)
    minimum_wage_ = min;
}

} //  namespace CSCE240_Employees
