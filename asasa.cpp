#include <iostream>
using namespace std;
int main()
{
    int n,k;
    int ans2;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = k, curr = a[0];
    for(int i=1;i<n;i++){
        if(a[i] - curr>k){
            ans+=k;
            curr=a[i];
        }
    }
    ans+=k;
    ans2 = ans-1;
    cout<<ans2<<endl;
    return 0;
}
