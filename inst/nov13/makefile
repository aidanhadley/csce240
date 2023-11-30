flags = -std=c++17 -Wall -I .

rectangle.o : rectangle.cc rectangle.h
	g++ $(flags) -c $<

square.o : square.cc square.h rectangle.h
	g++ $(flags) -c $<

testshape.o : testshape.cc rectangle.h square.h
	g++ $(flags) -c $<

testshape : testshape.o square.o rectangle.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm *.o testshape
