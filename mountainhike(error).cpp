#include <iostream>
using namespace std;
int main() {
    int numheight, height;
    cin >> numheight;
    int count = 0;
    int last_height = -1;
    for (int i = 0; i < numheight; i++) {
        cin >> height;
        if (last_height >= 0 && height > last_height) {
            count += height - last_height;
        }

        last_height = height;
    }
    cout << count << endl;
    return 0;
}
