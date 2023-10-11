# comments
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

flags = -std=c++17 -Wall -I .
compile = g++ $(flags) -c
link = g++ $(flags)

program3functions.o : program3functions.cc program3functions.h
	$(compile) $<

testCountAboveAv : testCountAboveAv.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testSortByCol : testSortByCol.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testSortByRow : testSortByRow.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testMedianInCol : testMedianInCol.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testModeInCol : testModeInCol.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

clean :
	rm *.o a.out

