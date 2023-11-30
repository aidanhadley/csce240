//  Copyright 2023 hadleya
//  Implementation of the shortanswerquestion.h file
#include <string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"shortanswerquestion.h"
#include"question.h"

namespace csce240_program5 {
  //  constructor method
  ShortAnswerQuestion::ShortAnswerQuestion(string question, string answer) :
      Question(question), answer_("") {
    SetAnswer(answer);
}
//  mutator
void ShortAnswerQuestion::SetAnswer(string a) {
  answer_ = a;
}
//  print function
void ShortAnswerQuestion::Print(bool sa) const {
  Question::Print();
  if (sa) {
    cout << "Correct Answer: " << answer_ << endl;
  }
}

ShortAnswerQuestion::~ShortAnswerQuestion() {
  //  Destructor code
}
}  //  namespace csce240_program5
