#!/bin/bash
# Clears terminal
clear
# Run in . (current directory)
line="******************************************************************************* "
fail="something failed. result:"
pass="everything passed!"
run="running "

one=testPixelShapeName
two=testPixelShapePixel
three=testRightIsoscelesName
four=testRightIsoscelesLeg
five=testRectangleName
six=testRectangleSides
seven=testRectangleTimesEquals
eight=testPrint1
nine=testPrint2
ten=testPrint3
eleven=testPrint4
twelve=testPrint4

# Block for $one
echo "$line"
echo "$run $one"
if make "$one" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$one"
else
  echo "$pass"
fi

# Block for $two
echo "$line"
echo "$run $two"
if make "$two" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$two"
else
  echo "$pass"
fi

# Block for $three
echo "$line"
echo "$run $three"
if make "$three" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$three"
else
  echo "$pass"
fi

# Block for $four
echo "$line"
echo "$run $four"
if make "$four" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$four"
else
  echo "$pass"
fi

# Block for $five
echo "$line"
echo "$run $five"
if make "$five" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$five"
else
  echo "$pass"
fi

# Block for $six
echo "$line"
echo "$run $six"
if make "$six" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$six"
else
  echo "$pass"
fi

# Block for $seven
echo "$line"
echo "$run $seven"
if make "$seven" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$seven"
else
  echo "$pass"
fi

# Block for $eight
echo "$line"
echo "$run $eight"
if make "$eight" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$eight"
else
  echo "$pass"
fi

# Block for $nine
echo "$line"
echo "$run $nine"
if make "$nine" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$nine"
else
  echo "$pass"
fi

# Block for $ten
echo "$line"
echo "$run $ten"
if make "$ten" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$ten"
else
  echo "$pass"
fi

# Block for $eleven
echo "$line"
echo "$run $eleven"
if make "$eleven" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$eleven"
else
  echo "$pass"
fi

# Block for $twelve
echo "$line"
echo "$run $twelve"
if make "$twelve" 2>&1 | grep -q 'Failed\|Stop.\|error\|warning'; then
  echo "$fail"
  make "$twelve"
else
  echo "$pass"
fi

# clean!!
echo "cleanup time"
make clean &> /dev/null
rm a.out &> /dev/null
echo "$line"

