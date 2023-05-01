#include <iostream>
using namespace std;
int main() {
    int n, mr = -1, tr = 0, ms = -1, ts = 0;
    cin >> n;
    for (int i = 0, r, s; i < n; i++) {
        cin >> r >> s;
        if (r > mr) {
            mr = r;
            tr = s;
        }
        else if (r == mr) {
            tr += s;
        }
        if (s > ms) {
            ms = s;
            ts = r;
        }
        else if (s == ms) {
            ts += r;
        }
    }
    cout << ts << endl;
    return 0;
}
