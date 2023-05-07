/*
A company requires a program that calculates the number of solar panels it manufactures that can be installed on a rectangular area of roof.

Task:
Write a program that takes, as input, the width and depth of the rectangular roof section, and outputs the maximum number of solar panels that can be installed on it.

Constraints:
[Note: you do not need to check constraints in your code for this competition - they are just for information about the range of test data values.]

The solar panels can only be installed vertically.
The solar panels are 0.95m wide and 1.5m tall.
No space is needed between adjacent panels and they can be fitted to the very edges of the roof section.
Input format:
First line: A float (The width of the roof section.)
Second line: A float (The depth of the roof section.)
Output format:
An integer.
Example:
Input:
5.1
2.0
Output:
5

*/


#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float h,l;
	cin>>h>>l;
	int per = 1.5*0.95;
	int area = h*l;
	int divide = round(area/per);
	
}
