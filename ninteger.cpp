#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int numbers[n];

    for(int i=0; i<n; i++) {
        cin >> numbers[i];
    }

    for(int i=0; i<n; i+=2) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    for(int i=1; i<n; i+=2) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
