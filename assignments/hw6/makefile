flags = -std=c++17 -Wall -I .

pixelshape.o : pixelshape.cc pixelshape.h
	g++ $(flags) -c $< -I .

testPixelShapeName : testPixelShapeName.cc pixelshape.o
	g++ $(flags) $^
	./a.out

testPixelShapePixel : testPixelShapePixel.cc pixelshape.o
	g++ $(flags) $^
	./a.out

rightisosceles.o : rightisosceles.cc rightisosceles.h pixelshape.h
	g++ $(flags) -c $< -I .

testRightIsoscelesName : testRightIsoscelesName.cc rightisosceles.o pixelshape.o
	g++ $(flags) $^
	./a.out

testRightIsoscelesLeg : testRightIsoscelesLeg.cc rightisosceles.o pixelshape.o
	g++ $(flags) $^
	./a.out

testRightIsoscelesTimesEquals : testRightIsoscelesTimesEquals.cc rightisosceles.o pixelshape.o
	g++ $(flags) $^
	./a.out

rectangle.o : rectangle.cc rectangle.h pixelshape.h
	g++ $(flags) -c $< -I .

testRectangleName : testRectangleName.cc rectangle.o pixelshape.o
	g++ $(flags) $^
	./a.out

testRectangleSides : testRectangleSides.cc rectangle.o pixelshape.o
	g++ $(flags) $^
	./a.out

testRectangleTimesEquals : testRectangleTimesEquals.cc rectangle.o pixelshape.o
	g++ $(flags) $^
	./a.out

checkit : checkit.cc
	g++ $(flags) $^ -o $@

testPrintMan : print.cc rectangle.o rightisosceles.o pixelshape.o
	g++ $(flags) $^ -o $@
	./testPrintMan

testVirtualPrints : testVirtualPrints.cc rectangle.o rightisosceles.o pixelshape.o
	g++ $(flags) $^ -o $@

testPrint1 : testVirtualPrints checkit
	./testVirtualPrints 2 true < sampleinput.txt > studentoutput1.txt
	rm testVirtualPrints
	./checkit 0

testPrint2 : testVirtualPrints checkit
	./testVirtualPrints 0.5 true < sampleinput.txt > studentoutput2.txt
	rm testVirtualPrints
	./checkit 1

testPrint3 : testVirtualPrints checkit
	./testVirtualPrints 2 false < sampleinput.txt > studentoutput3.txt
	rm testVirtualPrints
	./checkit 2

testPrint4 : testVirtualPrints checkit
	./testVirtualPrints 0.5 false < sampleinput.txt > studentoutput4.txt
	rm testVirtualPrints
	./checkit 3

clean :
	rm  *.o testVirtualPrints checkit studentoutput*.txt

