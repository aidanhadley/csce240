// Copyright 2023 hadleya
// Implementation of the trufalsequestion.h file
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"truefalsequestion.h"
#include"question.h"

namespace csce240_program5 {
  TrueFalseQuestion::TrueFalseQuestion(string question, bool answer) :
      Question(question), answer_(true) {
    SetAnswer(answer);
  }

  void TrueFalseQuestion::SetAnswer(bool a) {
    answer_ = a;
  }

  void TrueFalseQuestion::Print(bool sa) const {
    Question::Print();
    if (sa) {
      cout << "Correct Answer: ";
      if (answer_)
        cout << "true";
      else
        cout << "false";
      cout << endl;
    }
  }

  TrueFalseQuestion::~TrueFalseQuestion() {
    //  Destructor code
  }
}
