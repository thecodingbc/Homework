#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    string s = "231";

    sort(begin(s), end(s));

    do {
        cout << s << " ";
    } while(next_permutation(begin(s), end(s)));

    return 0;
}

/*
5p5

1p4, 2p4, 3p4, 4p4

*/