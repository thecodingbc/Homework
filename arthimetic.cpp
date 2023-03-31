#include <iostream>
using namespace std;
void solution(int n) {
    int d = 2;
    while (n > 1) {
        while (n % d == 0) {
            cout << (n == d ? "" : "*") << d;
            n /= d;
        }
        d++;
    }
}

int main() {
    int n;
    cin >> n;
    solution(n);
    return 0;
}


//THERE ARE SOME PROBLEMS WITH MULTIPLICATION SIGN BTU IM NOT SURE HOW TO FIX ITS 3*5*823