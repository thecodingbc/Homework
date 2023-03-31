#include <iostream>
using namespace std;
int main() {
    int num;
    int pc = 0;
    int nc = 0;
    int ps = 0;
    int ns = 0;
    cin >> num;
    while (num != 0) {
        if (num > 0) {
            pc++;
            ps += num;
        } else {
            nc++;
            ns += num;
        }
        cin >> num;
    }
    cout<<pc<<nc<<endl;
    cout<<ps<<ns<<endl;
    return 0;
}
