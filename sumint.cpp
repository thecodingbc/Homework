#include <iostream>
using namespace std;

int main()
{
    int n,i,temp;
    int ans = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>temp;
        ans += temp;
    }
    cout<<ans;

    return 0;
}