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

testdrive : testdrive.o employee.o salariedemployee.o hourlyemployee.o
	g++ $(flags) $^ -o $@
	./$@

testdrive.o : testdrive.cc employee.h salariedemployee.h
	g++ $(flags) -c $<

salariedemployee.o : salariedemployee.cc salariedemployee.h employee.h
	g++ $(flags) -c $<

hourlyemployee.o : hourlyemployee.cc hourlyemployee.h employee.h
	g++ $(flags) -c $<

employee.o : employee.cc employee.h
	g++ $(flags) -c $<

clean :
	rm *.o 
