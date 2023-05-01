#include <iostream>
using namespace std;
int main() {
    const int MAX = 20;
    int count, num, found[MAX] = {0};
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> num;
        found[num]++;
    }
    for (int i = 0; i < count; i++) {
        cin >> num;
        if (found[num] == 0) {
            cout << "False";
            return 0;
        }
        found[num]--;
    }
    cout << "True";
    return 0;
}
