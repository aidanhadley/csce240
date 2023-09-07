# comments in a makefile
# $@ = target
# $< = first prerequisite/dependency
# $^ = all prerequisites/dependencies

flags= -std=c++17 -Wall -I .

# target : prerequisites / dependencites
trianglestuff.o : trianglestuff.cc trianglestuff.h
	g++ $(flags) -c $< 

sept7.o : sept7.cc trianglestuff.h
	g++ $(flags) -c $< 

sept7 : sept7.o trianglestuff.o
	g++ $(flags) $^ -o $@
	./$@

clean : 
	rm -f *.o sept7
