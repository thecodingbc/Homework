#include <iostream>
using namespace std;
int main() {
    int n, num = 0, most = -1, max = -1;
    int input;
    cin >> n;
    for (int i = 0; i < n; i++, num = 0) {
        cin >> input;
        for (int j = 0; j < 10; j++) {
            int count = 0, tmp = input;
            while (tmp) {
                count += (tmp % 10 == j);
                tmp /= 10;
            }
            if (count > num){
                num = count;
                most = j; 
            } 
        }
        if (num > max){
            max = num;
        } 
    }
    cout << most;
    cout << endl;
}
