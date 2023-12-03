# comments in a makefile
# $@ = target
# $< = first prerequisite/dependency
# $^ = all prerequisites/dependencies

flags= -std=c++17 -Wall -I .

# target : prerequisites / dependencites
sept12functions.o : sept12functions.cc sept12functions.h
	g++ $(flags) -c $<

sept12.o : sept12.cc sept12functions.h
	g++ $(flags) -c $<

sept12 : sept12.o sept12functions.o
	g++ $(flags) -o $^
	./$@

clean :
	rm -f *.o sept12