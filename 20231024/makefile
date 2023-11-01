flags = -std=c++17 -Wall -I .

temperature.o : temperature.cc temperature.h
	g++ $(flags) -c $<

forecast.o : forecast.cc forecast.h temperature.h
	g++ $(flags) -c $< 

oct24 : oct24.cc temperature.o forecast.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm *.o oct24
