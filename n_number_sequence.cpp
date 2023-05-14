#include <iostream>
using namespace std;
int main() {
    int n, arr[99999], k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int j = n-1;
    while (j >= 0 && arr[j] > k) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = k;
    cout<<"result: "<<endl;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << endl; // have a 4 at the end not sure how to solve it
    }
    // cout<<k<<endl; (yes)
    // cout<<n<<endl; (yes)
    return 0;
}
