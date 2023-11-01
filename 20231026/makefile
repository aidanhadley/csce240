flags = -std=c++17 -Wall -I .

temperature.o : temperature.cc temperature.h
	g++ $(flags) -c $<

forecast.o : forecast.cc forecast.h temperature.h
	g++ $(flags) -c $< 

oct26 : oct26.cc temperature.o forecast.o
	g++ $(flags) $^ -o $@
	./$@

clean :
	rm *.o oct26
