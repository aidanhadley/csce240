//  Copyright 2023 hadleya
//  Implementation of multiplechoicequestion.h
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"multiplechoicequestion.h"
#include"question.h"

namespace csce240_program5 {

//  constructor
MultipleChoiceQuestion::MultipleChoiceQuestion(string q, int n,
    string * a, bool * c) : Question(q), answerchoices_(0), answers_(nullptr),
    iscorrect_(nullptr) {
  SetAnswerChoices(n, a, c);
}
//  copy constructor
MultipleChoiceQuestion::MultipleChoiceQuestion(const Question& q, int n,
    string * a, bool * c) : answerchoices_(0), answers_(nullptr),
    iscorrect_(nullptr) {
  SetAnswerChoices(n, a, c);
}

void MultipleChoiceQuestion::SetAnswerChoices(int n, string * a, bool * c) {
  answerchoices_ = n;
  if (a) {
    answers_ = new string[answerchoices_];
    for (int i = 0; i < answerchoices_; ++i) {
      answers_[i] = a[i];
    }
  }
  if (c != nullptr) {
    iscorrect_ = new bool[answerchoices_];
    for (int i = 0; i < answerchoices_; ++i) {
      iscorrect_[i] = c[i];
    }
  }
}

void MultipleChoiceQuestion::Print(bool sa) const {
  Question::Print();
  cout << "Answer Choices:" << endl;
  for (int i = 0; i < answerchoices_; ++i) {
    cout << answers_[i];
    if (sa) {
      if (iscorrect_ != nullptr) {
        cout << " - " << (iscorrect_[i] ? "correct" : "incorrect");
      } else {
        cout << " - " << "correct";
      }
    }
    cout << endl;
  }
}

MultipleChoiceQuestion::~MultipleChoiceQuestion() {
  delete[] iscorrect_;
  iscorrect_ = nullptr;
  delete[] answers_;
  answers_ = nullptr;
}

MultipleChoiceQuestion& MultipleChoiceQuestion::operator = (
    const MultipleChoiceQuestion& right) {
      SetQuestion(right.GetQuestion());
      SetAnswerChoices(right.answerchoices_, right.answers_, right.iscorrect_);
      return *this;
    }
}  //  namespace csce240_program5
