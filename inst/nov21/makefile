# target  : prerequisites/dependencies
# tab command
#
#	$@ target
# $< first prerequisite
# $^ all prerequisites

# the -I is the include path flag, we will add the current
# directory (.) to the include path so that the compiler
# will find our user defined header files there
flags = -std=c++17 -Wall -I .

employee.o : employee.cc employee.h
	g++ $(flags) -c $<

salariedemployee.o : salariedemployee.cc salariedemployee.h employee.h
	g++ $(flags) -c $<

hourlyemployee.o : hourlyemployee.cc hourlyemployee.h employee.h
	g++ $(flags) -c $<

testdrive.o : testdrive.cc salariedemployee.h employee.h hourlyemployee.h
	g++ $(flags) -c $<

testdrive : testdrive.o employee.o salariedemployee.o hourlyemployee.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm *.o testdrive
