#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    const int MAX_NUM = 1E+2;
    int n;
    int numCount[MAX_NUM + 1] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        ++numCount[num];
    }
    cout<<endl;
    for (int i = 0; i <= MAX_NUM; ++i) {
        if (numCount[i] > 0) {
            cout << i << " " << numCount[i] << "\n";
        }
    }
    return 0;
}
