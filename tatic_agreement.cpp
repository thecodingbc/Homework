#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int ta1 = gcd(a1, a2);
    int ta = gcd(b1, b2);

    int max= max(ta1, ta2);
    cout << max << endl;

    return 0;
}
