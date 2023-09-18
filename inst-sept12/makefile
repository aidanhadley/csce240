# comments
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

# -I add to the include path (where the compiler looks for included files
# . is the current directory
flags = -std=c++17 -Wall -I .

# target : prerequisite / dependency
sept12functions.o : sept12functions.cc sept12functions.h
	g++ $(flags) -c $<

sept12.o : sept12.cc sept12functions.h
	g++ $(flags) -c $<

sept12 : sept12.o sept12functions.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm *.o sept12

