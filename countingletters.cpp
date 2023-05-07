
/*
program is required to count how many vowels and consonants are used in a given sentence.

Task:
Write a program that counts the total number of vowels and consonants used in a sentence. Output the number of vowels then the number of consonants, separated by a space.

Constraints:
[Note: you do not need to check constraints in your code for this competition - they are just for information about the range of test data values.]

Sentences will only contain upper and lowercase letters, spaces and a full-stop.
Input format:
A string.
Output format:
Two integers separated by a space.
Example:
Input:
I love programming.
Output:
6 10
*/

#include <iostream>
using namespace std;
int main() {
    char c;
    int v = 0, c = 0;
    while (cin >> c) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            v++;
        } else if (c >= 'a' && c <= 'z') {
            c++;
        }
        else{
        	cout<<"underfineddddddd";
		}
    }
    cout << v <<endl;
    cout << c;
    return 0;
}

