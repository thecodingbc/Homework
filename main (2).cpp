#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
        return sum;
    }

int main() {
    int x, y;
    cin >> x >> y;
    int count = 0;
    for (int i = x; i <= y; i++) {
        if (sumOfDigits(i) % 5 == 0) {
            count++;
        }
    }
    cout << count << endl;
return 0;
}