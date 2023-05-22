#include <iostream>
using namespace std;
int main() {
    int arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < 4; j++) {
        int a = arr[1][j];
        arr[1][j] = arr[2][j];
        arr[2][j] = a;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}
