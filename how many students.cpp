#include <iostream>
using namespace std;
int main() {
    for(int i = 700; i <= 800; i++) {
        if((i % 15) == 12 && (i % 21) == 15) {
            cout << i << endl;
        }
    }
    return 0;
}
