#!/bin/bash
# clear your terminal lol
clear
# run this in your . folder
echo "*******************************************************************************"
echo "testing TrueFalseQeustion class"
make testtf > /dev/null
if ./checkit 0 | grep -q 'match!'; then
  echo "it passed"
else
  echo "it failed"
fi
echo "*******************************************************************************"
echo "testing ShortAnswerQuestion class"
make testsa > /dev/null
if ./checkit 1 | grep -q "match"; then
  echo "it passed"
else
  echo "it failed"
fi

echo "*******************************************************************************"
echo "testing MultipleChoiceQuestion constructor with default args and the print function"
make testmc1 > /dev/null
if ./checkit 2 | grep -q "match"; then
  echo "it passed"
else
  echo "it failed"
fi

echo "*******************************************************************************"
echo "testing MultipleChoiceQuestion copy constructor and the SetAnswerChoices function"
make testmc2 > /dev/null
if ./checkit 3 | grep -q "match"; then
  echo "it passed"
else
  echo "it failed"
fi

# clean everything up
echo "*******************************************************************************"
echo "cleaning up"
make clean &> /dev/null
rm -f checkit
echo "done!"
