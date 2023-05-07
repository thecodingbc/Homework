/*
A program is required to output a simple horizontal graph. Data is sent to the program as a stream of integers. Each new integer is less than the previous one. The graphical output is only required for the positive data. 

The formatting of the graph consists of a number of dashes on each horizontal line corresponding to the integer being represented on that line of the graph.

Task:
Write a program that takes, as input, an unspecified number of integer inputs and outputs a horizontal line graph of the data received that is greater than 0.

Constraints:
[Note: you do not need to check constraints in your code for this task - they are just for information about the range of test data values.]

All integers in the input will be no more than 100.
The data supplied will always have at least one integer that is greater than 0.
The data supplied will always have at least one integer that is less than 1.
Input format:
An unspecified number of rows with a single integer in each row.
Output format:
A horizontal line graph.
Example:
Input:
7
5
2
1
0
-2
-12
Output:
-------
-----
--
-
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) { 
        if(n > 0) { 
            for(int i = 0; i < n; ++i) {
                cout << "-"; 
            }
            cout << endl; 
        }
        else{
        	cout<<"undefined: ";
		}
    }
    return 0;
}

