/*
Pig Latin is a language game made by modifying English words:

If the letter starts with a consonant:
Step 1: Remove the first letter of the word.
Step 2: Add a “-” to the end of the word.
Step 3: Add the removed letter.
Step 4: Add ”ay”.

If the letter starts with a vowel just add “-yay“ to the end of the word.

Task:
Write a program that will translate a word into Pig Latin.

Constraints:
[Note: you do not need to check constraints in your code for this competition - they are just for information about the range of test data values.]

The provided input word will only consist of uppercase and lowercase letters.
Input format:
A string consisting of a single English word.
Output format:
A string consisting of the translated input.
Example:
Input:
Hello
Output:
ello-Hay

*/


#include <iostream>
using namespace std;
int main() {
    string input;
    int lengthinput = input.length();
    cin >> input;
    if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u'){
    	cout << input << "-yay" <<endl;
	}	
	else if (input[0] != 'a' || input[0] != 'e' || input[0] != 'i' || input[0] != 'o' || input[0] != 'u'){
        for (int i = 1; i <= len; ++i) {
            cout << input[i];
        }
        cout << "-" << input[0] << "ay" << endl;
		
    else{
    	cout<<"undefined";
	}
    return 0;
}

