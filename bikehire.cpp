#include <iostream>
using namespace std;
int main() {
    int n, count = 0, new_bike = 0;
    cin >> n;
    int if_book[n][2];
    for (int i = 0; i < n; i++) {
        cin >> if_book[i][0] >> if_book[i][1];
    }
    for (int i = 0; i < n; i++) {
        int start = if_book[i][0];
        int end = start + if_book[i][1];
        if (start >= new_bike) {
            new_bike = end;
            count++;
        } else if (end > new_bike) {
            new_bike += (end - new_bike);
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
