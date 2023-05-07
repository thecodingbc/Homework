/*

A student wants to be able to find all the square numbers from 2 to n, where n is a positive integer.

Task
Write a program that outputs a list of all the square numbers from 2 to n.

Constraints
1 < n < 1000.

Example
Input:
10
Output:
4 9 16 25 36 49 64 81 100

*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 2; i*i <= n; i++) {
        cout << i*i << " ";
    }
    return 0;
}


