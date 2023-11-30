//  Copyright 2023 hadleya/bhipp (comments/string inclusion)
//  Define MultipleChoiceQuestion as child of the Question class
#include<string>
using std::string;
// MultipleChoiceQuestion should be a child of the Question class
#include"question.h"
#ifndef _MULTIPLECHOICEQUESTION_H_
#define _MULTIPLECHOICEQUESTION_H_
namespace csce240_program5 {
class MultipleChoiceQuestion : public Question {
 public:
// Create an explicit constructor that allows the question, the number of
// choices, the answer choices, and the answer correct/incorrect values to be
// initialized when the object is instantiated. The parameters should have
// default argments of "?", 0, nullptr, and nullptr, respectively.
// If all but the last two arguments are provided, make all of the answer
// choices the empty string "", and all of the correct/incorrect values true.
// If all but the last argument is provided, default all correct/incorrect
// values to true.
// The prototype is provided below
  explicit MultipleChoiceQuestion(string = "?", int n = 0, string * a = nullptr,
                                  bool * c = nullptr);

// Create a copy constructor
  explicit MultipleChoiceQuestion(const Question& q, int n = 0,
                  string * a = nullptr, bool * c = nullptr);
// Overload the assignment operator
  MultipleChoiceQuestion& operator =(const MultipleChoiceQuestion& right);
// Create a destructor that frees up all dynamically allocated memory
~MultipleChoiceQuestion();
// Add a SetAnswerChoices function that sets the number of choices, the values
// of the answer choices, and the answer correct/incorrect values. This function
// will dynamically allocate and deallocate memory for the data members, as
// necessary. The prototype is provided below
  void SetAnswerChoices(int n, string * a, bool * c);

// Add a Print function that takes a bool parameter: void Print(bool) const;
// This fuction should send output to the standard output device, using cout.
// The first line of output should be "Question: " followed by the value of
// the question data member.
// The next line of output should be "Answer Choices:"
// The following lines should print each answer a separate line.
// If the Print function's argument is true, each answer choice should be
// followed by " - correct" or " - incorrect"
// See testmc1.cc for example function calls and /output/correctmc1.txt for the
// expected output for those function calls.
  void Print(bool sa = false) const;

 private:
// The class should have a private integer data member that holds the number
// of answer choices for the question. Add an accessor and mutator function
// for this data member.
  int answerchoices_;
// The class should have a private string pointer data member that holds the
// answer choices for the question.
  string * answers_;
// The class should have a private bool pointer data member that holds whether
// each of the answer choices for the question is correct or not.
  bool * iscorrect_;
};
}  //  namespace csce240_program5
#endif
