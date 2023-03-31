#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b, int c) {
    int gcd_ab = gcd(a, b);
    int lcm_ab = (a * b) / gcd_ab;
    int gcd_lcm_ab_c = gcd(lcm_ab, c);
    return (lcm_ab * c) / gcd_lcm_ab_c;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int LCM = lcm(a, b, c);
    cout << LCM;
    return 0;
}
