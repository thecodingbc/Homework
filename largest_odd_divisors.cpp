#include <iostream>
using namespace std;
int a(int n) {
    for (int i = n; i >= 1; i -= 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a(i);
    }

    cout << sum << endl;

    return 0;
}
