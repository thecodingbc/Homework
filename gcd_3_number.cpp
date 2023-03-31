#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}



int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int var1 = gcd(a, b);
    int var2 = gcd(var1, c);

    cout << var2 << endl;

    return 0;
}
