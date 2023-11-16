# comments
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

# -I add to the include path (where the compiler looks for included files
# . is the current directory
flags = -std=c++17 -Wall -I .

# target : prerequisite / dependency
arrayfunctions.o : arrayfunctions.cc arrayfunctions.h
	g++ $(flags) -c $<

sept28.o : sept28.cc arrayfunctions.h
	g++ $(flags) -c $<

sept28 : sept28.o arrayfunctions.o
	g++ $(flags) $^ -o $@
	./$@

make clean :
	rm *.o sept28

