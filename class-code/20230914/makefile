# comments in a makefile
# $@ = target
# $< = first prerequisite/dependency
# $^ = all prerequisites/dependencies

flags= -std=c++17 -Wall -I .

# target : prerequisites / dependencites
sept14functions.o : sept14functions.cc sept14functions.h
	g++ $(flags) -c $<

sept14.o : sept14.cc sept14functions.h
	g++ $(flags) -c $<

sept14 : sept14.o sept14functions.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm -f *.o sept14