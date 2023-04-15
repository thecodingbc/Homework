#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int nums[n];
    for(int i=0; i<n; i++) {
        cin >> num[i];
    }
    int x= 0;
    for(int i=0; i<n; i++) {
        cout << nums[x] << " ";
        x = (x + 2) % n;
    }
    cout << endl;
    return 0;
}
