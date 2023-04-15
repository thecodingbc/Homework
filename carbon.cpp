#include <iostream>
using namespace std;
int main() {
    int people, dist;
    cin >> people>>dist;
    int cars = (people + 3) / 4; 
    int co2=100+10*min(people-1, 3); 
    int totalco2=cars*co2*dist;
    cout << totalco2;
    return 0;
}
