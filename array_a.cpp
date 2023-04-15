#include <iostream>
using namespace std;
int main() {
    int n;
    int curr = 0;
    int max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        curr += num;
        if (curr > max) {
            max = curr;
        }
        if (curr < 0) {
            curr = 0;
        }
    }
    cout<<max;
    return 0;
}
