# comments
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

# -I add to the include path (where the compiler looks for included files
# . is the current directory
flags = -std=c++17 -Wall -I .

# target : prerequisite / dependency
sept14functions.o : sept14functions.cc sept14functions.h
	g++ $(flags) -c $<

sept14.o : sept14.cc sept14functions.h
	g++ $(flags) -c $<

sept14 : sept14.o sept14functions.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm *.o sept14

