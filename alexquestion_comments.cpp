#include <iostream> // include iostream
using namespace std; // namespace std
int savings_plan(int budgets[], int n) { // initialise the coede (starting of code)
    int savings = 0; // initialise savings
    int balance = 0; // initialise balance
    int month = 1; // initialise months
    
    /*
    
    int i = 0: This is the starting value of i (initialise).

    i < n: the loop will continue as long as i is less than n.
    The loop will continue to execute until the condition i < n is no longer true.

    i++: i will be incremented by 1 after each iteration.

    int surplus = balance + 3005 - budgets[i]; calculates the surplus by subtracting the 
    i element of the budgets array from the balance + 3005

    if (surplus < 0) checks if the calculated surplus is less than 0. If the surplus is 
    less than 0, the code inside the if statement return -month; will be executed, which returns -month as the result. 

    The function returns the month when the surplus becomes negative or returns the value -month if the surplus is negative for any of the months.
    
    */
    for (int i = 0; i < n; i++) {
        int surplus = balance + 3005 - budgets[i];
        if (surplus < 0) {
            return -month;
        }
        
    /*
    if (surplus >= 100), checks if the value of surplus is greater than or equal to 100.
    
    if surplus >= 100 is true, then the code inside the first block of the if statement savings += surplus - 100; 
    balance = 100; will be executed. The first line of code savings += surplus - 100; updates the value of savings by 
    adding the difference between surplus and 100 to savings. The second line of code balance = 100; sets the value of balance to 100.
        
    If surplus >= 100 is false, then the code inside the else block balance = surplus; will be executed. (balance to surplus)
    
    month++; increments the value of month by 1 after each iteration of the loop.   
    */    
    
        if (surplus >= 100) {
            savings += surplus - 100;
            balance = 100;
        } else {
            balance = surplus;
        }
        month++;
    // end of main logic    
    }  // end of main logic 
    
    
    // initialise return variable(saving x 1.2)
    int returned = savings * 1.2;
    return returned + balance;
}


// code to execute previous code
int main() {
    int budgets[12] = {290,230,280,200,300,170,340,310,310,310,310,310}; // the cost of budgets
    int n = sizeof(budgets) / sizeof(budgets[0]); // variable called n to do division and aplying sizeof() to each variable
    cout << savings_plan(budgets, n) << endl; // prints out the answer --> savings_plan(budgets, n)
    return 0;
}