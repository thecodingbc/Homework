#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << n << endl;
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n << end;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}
