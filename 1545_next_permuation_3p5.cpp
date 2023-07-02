#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = 3;

    set<vector<int>> result;

    do {

        vector<int> t;

        for(int i = 0; i < r; i++)
        t.push_back(arr[i]);

        result.insert(t);

    } while(next_permutation(begin(arr), end(arr)));


    cout << result.size() << endl;
    for(auto v : result) {
        for(auto i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
