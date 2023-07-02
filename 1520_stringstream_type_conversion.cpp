#include <bits/stdc++.h>
#define ll long long
using namespace std;

stringstream ss;

void int_to_str() {

    int i = 100;
    ss << i;

    string str;
    ss >> str;
    cout << str << endl;

}

void str_to_int() {
    string str = "100";
    ss << str;

    int i;
    ss >> i;
    cout << i << endl;
}


int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    // int_to_str();

    str_to_int();

    return 0;
}