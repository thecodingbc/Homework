/*
N1-14-19 Comprehensive excises 
(1) psle
Remember the GPA calculator you did last week? Yes it is useful but.. for PSLE, we don't benchmark using GPAs. As such, you have to create a program that takes in a score, s, and output the corresponding grade. (1,2,3,4,5,6,7,8) 
The information required can be found here: 

1: 90 and above 2: 85 to 89 
3: 80 to 84 
4: 75 to 79 
5: 65 to 74 
6: 45 to 64 
7: 20 to 44 
8: Below 20 

INPUT FORMAT: The input will be a single non-negative integer not exceeding 100, s. 
OUTPUT FORMAT: The grade that corresponds to the score given to the program. 

*/





#include<iostream>
using namespace std;
int main(){
    int GPA,marks;
    cout<<"enter the marks you got";
    cin>>marks;
    if(marks >= 90 && marks <= 100) cout<<"1";
                //above         //below
    else if (marks>= 85 && marks<=89)cout<<"2";
    else if (marks>= 80 && marks<=84)cout<<"3";
    else if (marks>= 75 && marks<=79)cout<<"4";
    else if (marks>= 65 && marks<=74)cout<<"5";
    else if (marks>= 45 && marks<=64)cout<<"6";
    else if (marks>= 20 && marks<=64)cout<<"7";
    else if (marks <= 20) cout<<"8";
    else{
        cout<<"not included";
    }
    return 0;
}