// copyright 2023 hadleya
#include<iostream>
using std::cout;
using std::endl;
#include"temperature.h"

int main() {
    Temperature boiling(212);
    boiling.Print();
    boiling.Convert("Celsius");
    boiling.Print();
    boiling.Convert("Kelvin");
    boiling.Print();

    Temperature freezing(0, "Celsius:");
    boiling.Print();
    boiling.Convert("Fahrenheit");
    boiling.Print();
    boiling.Convert("Kelvin");
    boiling.Print();
    return 0;
}