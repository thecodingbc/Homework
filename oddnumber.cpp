#include <iostream>
using namespace std;
int main() {
    int n, arr[500], odd[500];
    int oddCount = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 1) {
            odd[oddCount++] = arr[i];
        }
    }
    for (int i = 1; i < oddCount; i++) {
        int key = odd[i];
        int j = i - 1;
        while (j >= 0 && odd[j] > key) {
            odd[j+1] = odd[j];
            j--;
        }
        odd[j+1] = key;
    }
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }
    return 0;
}
