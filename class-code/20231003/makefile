# comments
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

# -I add to the include path (where the compiler looks for included files
# . is the current directory
flags = -std=c++17 -Wall -I .

# target : prerequisite / dependency
#sept12functions.o : sept12functions.cc sept12functions.h
#	g++ $(flags) -c $<
#
oct3functions.o : oct3functions.cc oct3functions.h
	g++ $(flags) -c $<

oct3.o : oct3.cc oct3functions.o
	g++ $(flags) -c $<

oct3 : oct3.o oct3functions.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm -f *.o oct3

