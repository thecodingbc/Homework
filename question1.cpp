#include <iostream>
using namespace std;
int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int min = a[0][0];
    int row = 0, col = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                row = i + 1;
                col = j + 1;
            }
        }
    }
    cout << row << col ;
    return 0;
}
