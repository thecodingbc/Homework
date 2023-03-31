#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        bool check = i % 2 == 0;
        for (int j = 0; j < n; j++) {
            if (check) {
                if (j % 2 == 0) {
                    cout << "o";
                } else {
                    cout << "x";
                }
            } else {
                if (j % 2 == 0) {
                    cout << "x";
                } else {
                    cout << "o";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
