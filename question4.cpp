#include <iostream>
using namespace std;
int main() {
    int scores[n][m];
    int more[m] = {0};
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
            cin >> scores[i][j];
            more[j] += scores[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        more[j] /= n;
    }
    for (int i = 0; i < n; i++) {
        bool aboveMore = true;
        for (int j = 0; j < m && aboveMore; j++) {
            if (scores[i][j] <= more[j]) {
                aboveMore = false;
            }
        }
        if (aboveMore) {
            cout << (i + 1) << " ";
        }
    }
    return 0;
}
