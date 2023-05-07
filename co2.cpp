/*
Alesis is worrying about the CO2 emissions produced by his petrol car.

Task
Write a program that takes, as input, the litres of petrol he uses each month of a year.

Constraints:
[Note: you do not need to check constraints in your code for this competition - they are just for information about the range of test data values.]

The monthly figures are given in whole litres.
Monthly litres supplied are between 0 and 200 (inclusive).
1 litre of petrol produces 0.0024 tonnes of CO2 when burnt. (We are ignoring extraction, refining, etc.)
Input format:
A row of 12 integers separated by spaces.
Output format:
An integer representing the tonnes of CO2 produced, rounded down to the nearest tonne.
Example:
Input:
142 150 120 182 202 205 231 258 214 162 148 122
Output:
5
Calculation using example input data:
Annual C02 = 0.0024 x total litres
           = 5.1264
           = 5 tonnes
*/


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int l[12];
    for (int i = 0; i < 12; i++) {
        cin >> l[i];
    }
    int tl = 0;
    for (int i = 0; i < 12; i++) {
        tl += l[i];
    }
    int co2 = tl * 0.0024;
    cout << floor(totalCO2);
    return 0;
}

