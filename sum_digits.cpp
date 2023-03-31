#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int total = 0;
    while (n > 0) {
        int number = n % 10;
        total += number;
        n /= 10;
    }
    cout<<total;
    return 0;
}
