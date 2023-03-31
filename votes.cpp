#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0, c = 0, n = 0;
    int vote;
    while (true) {
        cin>>vote;
        if (vote==0){
            break;
        }
        if (vote == 1){
            a++;
        }
        else if (vote == 2){
            b++;  
        } 
        else if (vote == 3){
           c++; 
        }
        n++;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<n<<endl;
    if (a > n / 2) cout << "A-yes" << endl;
    else if (b > n / 2) cout << "B-yes" << endl;
    else if (c > n / 2) cout << "C-yes" << endl;
    else cout << "all-NO" << endl;
    return 0;
}
