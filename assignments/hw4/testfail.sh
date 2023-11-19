#!/bin/bash
echo "Testing weight 1"
make testweight1 | grep -e Fail -e Pass
#echo "Testing weight 2"
#make testweight2 | grep Fail
#echo "Testing weight 3"
#make testweight3 | grep Fail
#echo "Testing weightrange 1"
#make testweightrange1 | grep Fail
#echo "Testing weightrange 2"
#make testweightrange2 | grep Fail
#echo "Testing weightrange 3"
#make testweightrange3 | grep Fail
#echo "Testing weightrange 4"
#make testweightrange4 | grep Fail
#echo "Cleaning up"
make clean

#echo "Testing weight 1"
#make testweight1 | grep Pass
#echo "Testing weight 2"
#make testweight2 | grep Pass
#echo "Testing weight 3"
#make testweight3 | grep Pass
#echo "Testing weightrange 1"
#make testweightrange1 | grep Pass
#echo "Testing weightrange 2"
#make testweightrange2 | grep Pass
#echo "Testing weightrange 3"
#make testweightrange3 | grep Pass
#echo "Testing weightrange 4"
#make testweightrange4 | grep Pass
#echo "Cleaning up"
#make clean
