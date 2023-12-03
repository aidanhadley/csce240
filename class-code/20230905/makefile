# comments in a makefile

# $@ = target
# $< = first prerequisite/dependency
# $^ = all prerequisites/dependencies

flags= -std=c++17 -Wall

# target : prerequisites / dependencites
#	commands
sept5.o : sept5.cc
	g++ $(flags) -c $<
#	 g++ -std=c++17 -Wall -c sept5.cc

sept5 : sept5.o
	g++ $(flags) $< -o $@
	./$@ 

clean : 
	rm -f sept5 sept5.o