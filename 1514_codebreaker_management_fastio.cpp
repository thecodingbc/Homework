/*
https://codebreaker.xyz/problem/management

Q Description:
1st line: int N
2nd line: start from employee2, each number represents his immediate boss

Requirement:
print each employee's number of immediate subordinates

*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    freopen("1509.txt", "r", stdin);

    int n;
    cin >> n;

    unordered_map<int, unordered_set<int>> mp;

    // step 0)
    cin >> ws; // this is to ingore the whitespace of previous line, otherwise getline will read the only \n to str
    
    // step 1) read the whole line into a str using getline
    string str;
    getline(cin, str);
    cerr << str << endl;

    
    // step 2) wrap the str using a stringstream
    stringstream ss(str);
    
    // now you can just read int from the stringstream ss as you usually do from cin
    int t;
    for(int i = 2; i <= n; i++) {
        ss >> t;
        mp[t].insert(i);
    }

    for(int i = 1; i <= n; i++) {
        unordered_set<int> p = mp[i];
        cout << p.size() << endl;
    }

    return 0;
}