#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int S;
    cin >> S;
    int x = ceil(S/2.0); 
    int y = S - x;
    int x2 = 1; 
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            x2 += i;
            if (x/i != i) {
                x2 += x/i;
            }
        }
    }
    int y2 = 1;
    for (int i = 2; i <= sqrt(y); i++) {
        if (y % i == 0) {
            y2 += i;
            if (y/i != i) {
                y2 += y/i;
            }
        }
    }
    int maxsum = x2 + y2;
    cout << maxsum << endl;
    return 0;
}
