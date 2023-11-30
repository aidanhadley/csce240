// Copyright 2023 bhipp
// test drive our Employee class functionality
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
#include"salariedemployee.h"
using CSCE240_Employees::SalariedEmployee;
#include"employee.h"
using CSCE240_Employees::Employee;
#include"hourlyemployee.h"
using CSCE240_Employees::HourlyEmployee;

double ComputeTaxes(const Employee& e, double tax_rate) {
  return e.Pay() * tax_rate;
}

int main() {
  Employee * employees[3];
  string first, last, title;
  int pays, which;
  double hrs, rate, sal;
  for ( int i = 0; i < 3; ++i ) {
    cout << "Enter 1 for Salaried, 2 for Hourly ";
    cin >> which;
    cout << "First Name: ";
    cin >> first;
    cout << "Last Name: ";
    cin >> last;
    cout << "Job Title: ";
    cin >> title;
    cout << "Pay periods per year: ";
    cin >> pays;
    if ( which == 1 ) {
      cout << "Annual Salary: $";
      cin >> sal;
      employees[i] = new SalariedEmployee(first, last, title, pays, sal);
    } else {
      cout << "Hourly Rate: $";
      cin >> rate;
      cout << "Hours Worked: ";
      cin >> hrs;
      employees[i] = new HourlyEmployee(first, last, title, pays, rate, hrs);
    }
  }

  for ( int i = 0; i < 3; ++i ) {
    employees[i]->Print();
    cout << "Pay: $" << employees[i]->Pay() << endl;
    cout << "tax at 30 percent: $" << ComputeTaxes(*employees[i], 0.3) << endl;
  }

  return 0;
}




/*
int main() {
  Employee e("E","Ployee");
  SalariedEmployee s("Sal","Ree","CEO",12,240000);
  HourlyEmployee h("Our","Lee","Assistant to the Regional Manager",52,20,40);

  e.Print();
  s.Print();
  cout << "Pay: $" << s.Pay() << endl;
  cout << "Taxes: $" << ComputeTaxes(s, 0.25) << endl;
  h.Print();
  cout << "Pay: $" << h.Pay() << endl;
  cout << "Taxes $" << ComputeTaxes(h, 0.2) << endl;

  int choice;
  Employee * ptr;
  cout << "Enter 1 for Employee, 2 for Salaried Employee, or 3 for Hourly ";
  cin >> choice;
  if ( choice == 1 )
    ptr = &e;
  else if ( choice == 2 )
    ptr = &s;
  else
    ptr = &h;
  ptr->Print();
  cout << "Pay: $" << ptr->Pay() << endl;
  cout << "Taxes: $" << ComputeTaxes(*ptr, 0.25) << endl;
  return 0;
}
*/
