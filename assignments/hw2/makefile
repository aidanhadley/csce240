# comments
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

flags = -std=c++17 -Wall -I .

program2functions.o : program2functions.cc program2functions.h
	g++ $(flags) -c $<

testSumDigits : testSumDigits.cc program2functions.o
	g++ $(flags) $^
	./a.out

testIsPalindrome : testIsPalindrome.cc program2functions.o
	g++ $(flags) $^
	./a.out

testCountDigitMatch : testCountDigitMatch.cc program2functions.o
	g++ $(flags) $^
	./a.out

testSameDigits : testSameDigits.cc program2functions.o
	g++ $(flags) $^
	./a.out

testFactorCall : testFactorCall.cc program2functions.o
	g++ $(flags) $^ -o $@

testFactor : testFactorOutput.cc testFactorCall
	g++ $(flags) $<
	./a.out

testDoubleMinToIntMinSec : testDoubleMinToIntMinSec.cc program2functions.o
	g++ $(flags) $^
	./a.out

clean :
	rm program2functions.o a.out testFactorCall student-factor-output.txt

