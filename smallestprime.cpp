#include <iostream>
using namespace std;
bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int count = 0;
    int curr = 2;
    while (count < n) {
        if (prime(curr)) {
            count++;
        }
        curr++;
    }
    int result = curr-1;
    cout << result <<endl;
    return 0;
}
