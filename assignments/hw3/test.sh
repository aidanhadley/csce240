#!/bin/bash

echo "Running CountAboveAv"
make testCountAboveAv | grep Pass
make testCountAboveAv | grep Fail
echo "Running SortByCol"
make testSortByCol | grep Pass
make testSortByCol | grep Fail
echo "Running sortByRow"
make testSortByRow | grep Pass
make testSortByRow | grep Fail
echo "Running MedianInCol"
make testMedianInCol | grep Pass
make testMedianInCol | grep Fail
echo "Running ModeInCol"
make testModeInCol | grep Pass
make testModeInCol | grep Fail
