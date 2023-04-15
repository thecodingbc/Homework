#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int num[n];

    for(int i=0; i<n; i++) {
        cin >> num[i];
    }
    int max = 0;
    for(int i=1; i<n; i++) {
        if(num[i] > num[max]) {
            max = i;
        }
    }
    int temp = num[max];
    num[max] = num[0];
    num[0] = temp;

    for(int i=0; i<n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
