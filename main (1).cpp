// palindrome
// 2 numbers
#include <iostream>
using namespace std;
int answer(int N)
{
    int temp = 0;
    int a = N;
    while(N > 0)
    {
        temp = temp * 10 + N % 10;
        N = N/10;
    }
    if (temp == a){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x,N;
    for (int i = 100; i<=999; i++){
        for (int j = 100; i<=999; i++){
            int N = i * j;
            if(answer(N) and N > x){
                x = N;
            }
        }
    }
    return N;
}
