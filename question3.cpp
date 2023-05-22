#include <iostream>
using namespace std;
int main() {
    int a[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    int frontSum = 0;
    int backSum = 0;
    for (int i = 0; i < 4; i++) {
        frontSum += a[i][i];
    }
    for (int i = 0; i < 4; i++) {
        backSum += a[i][3 - i];
    }
    cout << frontSum << endl;
    cout << backSum << endl;
    return 0;
}
