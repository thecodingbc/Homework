#include <iostream>
using namespace std;
int solve(int a, int b) {
    int x = 1;
    while (true) {
        if ((a * x) % b == 1) {
            return x;
        }
        x++;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    int ans = solve(a, b);
    cout << ans;;
    return 0;
}
