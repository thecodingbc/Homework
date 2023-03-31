#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x[n+1] = {}; 
    x[0] = 1; 
    for (int coin : {1, 2, 5}) {
        for (int i = coin; i <= n; i++) {
            x[i] += x[i-coin];
        }
    }
    cout << x[n] << endl;
    return 0;
}
