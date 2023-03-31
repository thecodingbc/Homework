#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> rotate_stamp(const vector<string>& stamp) {
    int n = stamp.size();
    vector<string> rotated_stamp(n, string(n, ' '));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated_stamp[j][n-i-1] = stamp[i][j];
        }
    }
    return rotated_stamp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        vector<string> desired(n);
        for (int i = 0; i < n; i++) {
            cin >> desired[i];
        }
        cin >> k;
        vector<string> stamp(k);
        for (int i = 0; i < k; i++) {
            cin >> stamp[i];
        }

        bool possible = false;
        for (int i = 0; i < 4; i++) { 
            for (int r = 0; r <= n-k; r++) { 
                for (int c = 0; c <= n-k; c++) {
                    bool match = true;
                    for (int sr = 0; sr < k; sr++) { 
                        for (int sc = 0; sc < k; sc++) {
                            if (stamp[sr][sc] == '*' && desired[r+sr][c+sc] != '*') {
                                match = false;
                                break;
                            }
                        }
                        if (!match) {
                            break;
                        }
                    }
                    if (match) {
                        possible = true;
                        break;
                    }
                }
                if (possible) {
                    break;
                }
            }
            if (possible) {
                break;
            }
            stamp = rotate_stamp(stamp); 
        }


        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
