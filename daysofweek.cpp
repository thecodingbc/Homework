#include <iostream>
using namespace std;
int solve(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans = (ans * a) % 7;
    }
    return ans;
}
int main() {
    int a, b;
    cin >> a >> b;
    int day = solve(a, b);
    cout << day << endl;
    return 0;
}
