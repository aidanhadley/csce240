//  Copyright 2023 hadleya
//  test drive out Employee class functionality
#include"hourlyemployee.h"
using CSCE240_Employees::HourlyEmployee;
#include"salariedemployee.h"
using CSCE240_Employees::SalariedEmployee;
#include"employee.h"
using CSCE240_Employees::Employee;

int main() {
  SalariedEmployee e1, e2("Kenneth", "Chow", "Sitter", 365, 100000);
  e1.Print();
  e2.Print();
  e2.SetPaysPerYear(2*365);
  e2.Print();
  e2.SetSalary(125000);
  e2.Print();

  Employee justanemployee(e2);
  justanemployee.Print();

  SalariedEmployee salemployee(justanemployee);
  salemployee.Print();
  return 0;

  HourlyEmployee he;
  he.Print();
}
