#include <iostream>
using namespace std;
bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int s, ans = 0;
    cin >> s;
    for (int i = s / 2; i >= 2; i--) {
        if (prime(i) && prime(s - i)) {
            ans = i * (s - i);
            break;
        }
    }
    cout << ans;
    return 0;
}
