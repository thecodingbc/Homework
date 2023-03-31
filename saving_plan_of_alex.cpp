#include <iostream>

using namespace std;

int savings_plan(int budgets[], int n) {
    int savings = 0;
    int balance = 0;
    int month = 1;
    for (int i = 0; i < n; i++) {
        int surplus = balance + 3005 - budgets[i];
        if (surplus < 0) {
            return -month;
        }
        if (surplus >= 100) {
            savings += surplus - 100;
            balance = 100;
        } else {
            balance = surplus;
        }
        month++;
    }
    int returned = savings * 1.2;
    return returned + balance;
}

int main() {
    int budgets[] = {290,230,280,200,300,170,340,310,310,310,310,310};
    int n = sizeof(budgets) / sizeof(budgets[0]);
    cout << savings_plan(budgets, n) << endl;
    return 0;
}