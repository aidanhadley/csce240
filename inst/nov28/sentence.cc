// Copyright 2023 bhipp
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

class Sentence : public string {
 public:
  Sentence(string s) : string(s) {  }
};

int main() {
  Sentence my_sentence("This is a sentence.");
  my_sentence[my_sentence.length() - 1] = '!';
  cout << my_sentence << endl;
}
