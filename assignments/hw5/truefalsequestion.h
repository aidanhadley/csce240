//  Copyright 2023 hadleya/bhipp (comments)
//  Define the TrueFalseQuestion as a child of the Question class
#include"question.h"
#ifndef _TRUEFALSEQUESTION_H_
#define _TRUEFALSEQUESTION_H_
namespace csce240_program5 {
// TrueFalseQuestion should be a child of the Question class
class TrueFalseQuestion : public Question {
 public:
// Create an explicit constructor that allows the question and answer to be
// initialized when an object is instantiated. The question and answer
// parameters should have default arguments of "?" and true, respectively.
  explicit TrueFalseQuestion(string q = "?", bool a = true);
// Add a Print function that takes a bool parameter: void Print(bool) const;
// This function should create 1 or 2 lines of output to the standard output
// device, using cout.
  void Print(bool sa = false) const;
// The first line of output should be "Question: " followed by the value of
// the question data member (from base class Question).
// If the Print function's argument is true, it should output a second line
// that is "Correct Answer: " followed by "true" or "false" depending on the
// value of the private data member.
// See testtf.cc for example function calls and /output/correcttf.txt for the
// expected output for those function calls.
  bool GetAnswer() const { return answer_; }

  void SetAnswer(bool a);

  //  destructor method
  ~ TrueFalseQuestion();
 private:
// The class should have a private bool data member that holds whether the
// answer to the question is true or false. Add an accessor and mutator
// function for this data member
  bool answer_;
};
} //  namespace csce240_program5
#endif  //  end _TRUEFALSEQUESTION_H_