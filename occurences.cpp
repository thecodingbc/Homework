#include <iostream>
using namespace std;
int main() {
    int n,ele,count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (count == 0) {
            ele = num;
        }
        if (num == ele) {
            count++;
        } else {
            count--;
        }
    }
    cout << ele << endl;
    return 0;
}
