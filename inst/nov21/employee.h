// Copyright 2023 bhipp
// Define the Employee class
#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include<iostream>
using std::ostream;
#include<string>
using std::string;

namespace CSCE240_Employees {

class Employee {
  friend ostream& operator << (ostream&, const Employee&);

 public:
  explicit Employee(string first = "Jane", string last = "Doe",
                     string job_title = "TBD", int pays = 52);
  void SetFirst(string f);
  void SetLast(string l);
  void SetJobTitle(string title);
  void SetPaysPerYear(int ppy);
  string GetFirst() const { return first_name_; }
  string GetLast() const { return last_name_; }
  string GetJobTitle() const { return job_title_; }
  int GetPaysPerYear() const { return pays_per_year_; }
  virtual void Print() const;

  // Pay function... we don't know how to pay an employee from the base class
  // The = 0 on the end of the prototype makes this a pure virtual function
  // and turns the class into an abstract class - which can't be used to create
  // objects
  virtual double Pay() const = 0;  // { return 0; }

 private:
  string first_name_;
  string last_name_;
  string job_title_;
  int pays_per_year_;
};  // end class Employee

}  // namespace CSCE240_Employees

#endif  // _EMPLOYEE_H_
