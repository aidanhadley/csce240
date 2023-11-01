// Copyright 2023 hadleya
// Test the functionality added to the Forecast class on the 16th
#include<iostream>
using std::cout;
using std::endl;
#include"forecast.h"
#include"temperature.h"

int main() {
    Forecast today(Temperature(77), Temperature(55));
    cout << today << endl;
    today.SetHigh(Temperature(80)).SetLow(Temperature(64));
    cout << today << endl;
    return 0;
}
