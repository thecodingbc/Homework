/*
Four friends: A, B, C, and D, are racing multiple times to see who wins the most. Each race winner is awarded 1 point. If a player wins two times in a row they are awarded their winning point and an extra point.

Task:
Write a program that outputs the score of the overall winner (or winners if there is a draw).

Constraints:
[Note: you do not need to check constraints in your code for this competition - they are just for information about the range of test data values.]

Provided data will consist of no more than 100 race results.
Input format:
A string of uppercase letters separated by spaces. Each letter represents the player that won that race.
Output format:
An integer.
Example:
Input:
A A B C D C B C D D
Output:
4
*/

#include <iostream>
using namespace std;
int main() {
    char now, ago = ' ';
    int countA = 0, countB = 0, countC = 0, countD = 0, count;
    int max_score = 0;
    while (cin >> now) {
        if (now == ago) {
            if (now == 'A') countA++;
            if (now == 'B') countB++;
            if (now == 'C') countC++;
            if (now == 'D') countD++;
            if (countA == 2 || countB == 2 || countC == 2 || countD == 2) {
                if (countA == 2) max_score = max(max_score, ++countA);
                if (countB == 2) max_score = max(max_score, ++countB);
                if (countC == 2) max_score = max(max_score, ++countC);
                if (countD == 2) max_score = max(max_score, ++countD);
            }
        } else {
            countA = countB = countC = countD = 0;
        }
        ago = now;
    }
    count = max(max(max_score, countA), max(max(countB, countC), countD));
    cout << count;
    return 0;
}


